import rclpy
from rclpy.node import Node

import cv2
import numpy as np
from cv_bridge import CvBridge
from pathlib import Path

from sensor_msgs.msg import Image


class CalibrationPerceptionNode(Node):
    def __init__(self):
        super().__init__('calibration_perception')

        self.bridge = CvBridge()

        self.image_sub = self.create_subscription(
            Image,
            '/grab_camera',
            self.image_callback,
            10
        )

        self.min_area = 80
        self.has_printed = False
        self.debug_dir = Path('debug')
        self.debug_dir.mkdir(parents=True, exist_ok=True)
        self.debug_image_path = self.debug_dir / 'calibration_debug.png'


        self.world_points = np.array([
            [0.48, 0.14],  
            [0.48, -0.14],   
            [0.42, -0.14],  
            [0.42, 0.14],   
        ], dtype=np.float32)

        self.get_logger().info('Calibration perception node started. Waiting for /grab_camera ...')

    def image_callback(self, msg: Image):
        try:
            frame_rgb = self.bridge.imgmsg_to_cv2(msg, desired_encoding='rgb8')
            frame = cv2.cvtColor(frame_rgb, cv2.COLOR_RGB2BGR)
        except Exception as e:
            self.get_logger().error(f'cv_bridge conversion failed: {e}')
            return

        centers, debug_img = self.detect_four_blocks(frame)

        cv2.imwrite(str(self.debug_image_path), debug_img)

        if centers is None:
            self.get_logger().info('Did not detect exactly 4 valid reference blocks.')
            return

        image_points = np.array(centers, dtype=np.float32)

        self.get_logger().info('================ CALIBRATION RESULT ================')
        self.get_logger().info(f'image_points = np.array({image_points.tolist()}, dtype=np.float32)')
        self.get_logger().info(f'world_points = np.array({self.world_points.tolist()}, dtype=np.float32)')
        self.get_logger().info('Order: top-left, top-right, bottom-right, bottom-left')
        self.get_logger().info(f'Saved debug image to {self.debug_image_path}')

        if not self.has_printed:
            print('\nimage_points = np.array([')
            for p in image_points.tolist():
                print(f'    [{int(p[0])}, {int(p[1])}],')
            print('], dtype=np.float32)\n')

            print('world_points = np.array([')
            for p in self.world_points.tolist():
                print(f'    [{p[0]:.2f}, {p[1]:.2f}],')
            print('], dtype=np.float32)\n')

            self.has_printed = True

    def detect_four_blocks(self, frame):
        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

        lower_red_1 = np.array([0, 70, 50], dtype=np.uint8)
        upper_red_1 = np.array([15, 255, 255], dtype=np.uint8)
        lower_red_2 = np.array([165, 70, 50], dtype=np.uint8)
        upper_red_2 = np.array([180, 255, 255], dtype=np.uint8)

        lower_blue = np.array([100, 80, 50], dtype=np.uint8)
        upper_blue = np.array([130, 255, 255], dtype=np.uint8)

        mask_red_1 = cv2.inRange(hsv, lower_red_1, upper_red_1)
        mask_red_2 = cv2.inRange(hsv, lower_red_2, upper_red_2)
        mask_red = cv2.bitwise_or(mask_red_1, mask_red_2)

        mask_blue = cv2.inRange(hsv, lower_blue, upper_blue)

        mask = cv2.bitwise_or(mask_red, mask_blue)

        kernel = np.ones((5, 5), np.uint8)
        mask = cv2.morphologyEx(mask, cv2.MORPH_OPEN, kernel)
        mask = cv2.morphologyEx(mask, cv2.MORPH_CLOSE, kernel)

        contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

        candidates = []
        debug_img = frame.copy()

        for c in contours:
            area = cv2.contourArea(c)
            if area < self.min_area:
                continue

            M = cv2.moments(c)
            if M['m00'] == 0:
                continue

            u = int(M['m10'] / M['m00'])
            v = int(M['m01'] / M['m00'])

            x, y, w, h = cv2.boundingRect(c)
            candidates.append((u, v, area, x, y, w, h))

        if len(candidates) != 4:
            for item in candidates:
                u, v, area, x, y, w, h = item
                cv2.rectangle(debug_img, (x, y), (x + w, y + h), (0, 255, 255), 2)
                cv2.circle(debug_img, (u, v), 5, (255, 0, 0), -1)
                cv2.putText(
                    debug_img,
                    f'({u},{v}) a={area:.1f}',
                    (u + 8, v - 8),
                    cv2.FONT_HERSHEY_SIMPLEX,
                    0.5,
                    (255, 255, 255),
                    1
                )
            return None, debug_img

        candidates.sort(key=lambda t: t[1])
        top_two = sorted(candidates[:2], key=lambda t: t[0])
        bottom_two = sorted(candidates[2:], key=lambda t: t[0])

        top_left = top_two[0]
        top_right = top_two[1]
        bottom_left = bottom_two[0]
        bottom_right = bottom_two[1]

        ordered = [
            (top_left[0], top_left[1]),
            (top_right[0], top_right[1]),
            (bottom_right[0], bottom_right[1]),
            (bottom_left[0], bottom_left[1]),
        ]

        labels = ['TL', 'TR', 'BR', 'BL']
        ordered_full = [top_left, top_right, bottom_right, bottom_left]

        for label, item in zip(labels, ordered_full):
            u, v, area, x, y, w, h = item
            cv2.rectangle(debug_img, (x, y), (x + w, y + h), (0, 255, 0), 2)
            cv2.circle(debug_img, (u, v), 5, (255, 0, 0), -1)
            cv2.putText(
                debug_img,
                f'{label}=({u},{v})',
                (u + 8, v - 8),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.6,
                (255, 255, 255),
                1
            )

        return ordered, debug_img


def main(args=None):
    rclpy.init(args=args)
    node = CalibrationPerceptionNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()