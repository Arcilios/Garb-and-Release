import rclpy
from rclpy.node import Node

import cv2
import numpy as np
from cv_bridge import CvBridge
from pathlib import Path

from sensor_msgs.msg import Image
from std_msgs.msg import Header
from geometry_msgs.msg import PoseStamped, Vector3

from sorting_interfaces.msg import DetectedObject, DetectedObjectArray


class RealPerceptionNode(Node):
    def __init__(self):
        super().__init__('real_perception')

        self.bridge = CvBridge()

        self.image_sub = self.create_subscription(
            Image,
            '/grab_camera',
            self.image_callback,
            10
        )

        self.detected_pub = self.create_publisher(
            DetectedObjectArray,
            '/detected_objects',
            10
        )

        self.min_area = 120
        self.debug_dir = Path('debug')
        self.debug_dir.mkdir(parents=True, exist_ok=True)
        self.debug_image_path = self.debug_dir / 'perception_debug.png'

        self.image_points = np.array([
            [162.0, 127.0],   # TL
            [476.0, 127.0],   # TR
            [476.0, 194.0],   # BR
            [162.0, 194.0],   # BL
        ], dtype=np.float32)

        self.world_points = np.array([
            [0.48,  0.14],   # TL
            [0.48, -0.14],   # TR
            [0.42, -0.14],   # BR
            [0.42,  0.14],   # BL
        ], dtype=np.float32)

        self.H, _ = cv2.findHomography(self.image_points, self.world_points)

        self.cube_center_z = 0.72

        self.get_logger().info('real_perception started. Subscribing to /grab_camera')

    def image_callback(self, msg: Image):
        try:
            frame_rgb = self.bridge.imgmsg_to_cv2(msg, desired_encoding='rgb8')
            frame = cv2.cvtColor(frame_rgb, cv2.COLOR_RGB2BGR)
        except Exception as e:
            self.get_logger().error(f'cv_bridge conversion failed: {e}')
            return

        detected_objects, debug_frame = self.detect_objects(frame, msg.header)

        cv2.imwrite(str(self.debug_image_path), debug_frame)
        cv2.imshow("camera_debug", debug_frame)
        cv2.waitKey(1)

        if len(detected_objects) == 0:
            return

        out = DetectedObjectArray()
        out.header = Header()
        out.header.stamp = msg.header.stamp
        out.header.frame_id = 'world'
        out.objects = detected_objects

        self.detected_pub.publish(out)

        for obj in detected_objects:
            self.get_logger().info(
                f'Detected object: id={obj.object_id}, '
                f'class={obj.class_name}, conf={obj.confidence:.2f}, '
                f'world=({obj.pose.pose.position.x:.3f}, '
                f'{obj.pose.pose.position.y:.3f}, '
                f'{obj.pose.pose.position.z:.3f})'
            )

    def detect_objects(self, frame, header):
        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
        debug = frame.copy()

        detections = []

        # -------- Red mask --------
        lower_red_1 = np.array([0, 70, 50], dtype=np.uint8)
        upper_red_1 = np.array([15, 255, 255], dtype=np.uint8)
        lower_red_2 = np.array([165, 70, 50], dtype=np.uint8)
        upper_red_2 = np.array([180, 255, 255], dtype=np.uint8)

        red_mask1 = cv2.inRange(hsv, lower_red_1, upper_red_1)
        red_mask2 = cv2.inRange(hsv, lower_red_2, upper_red_2)
        red_mask = cv2.bitwise_or(red_mask1, red_mask2)

        # -------- Blue mask --------
        lower_blue = np.array([100, 80, 50], dtype=np.uint8)
        upper_blue = np.array([130, 255, 255], dtype=np.uint8)
        blue_mask = cv2.inRange(hsv, lower_blue, upper_blue)

        kernel = np.ones((5, 5), np.uint8)
        red_mask = cv2.morphologyEx(red_mask, cv2.MORPH_OPEN, kernel)
        red_mask = cv2.morphologyEx(red_mask, cv2.MORPH_CLOSE, kernel)

        blue_mask = cv2.morphologyEx(blue_mask, cv2.MORPH_OPEN, kernel)
        blue_mask = cv2.morphologyEx(blue_mask, cv2.MORPH_CLOSE, kernel)

        detections.extend(self.extract_objects_from_mask(
            red_mask, debug, header, class_name='cube_red', id_prefix='red_cube'
        ))
        detections.extend(self.extract_objects_from_mask(
            blue_mask, debug, header, class_name='cube_blue', id_prefix='blue_cube'
        ))

        return detections, debug

    def extract_objects_from_mask(self, mask, debug, header, class_name, id_prefix):
        objects = []

        contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

        idx = 0
        for c in contours:
            area = cv2.contourArea(c)
            if area < self.min_area:
                continue

            M = cv2.moments(c)
            if M['m00'] == 0:
                continue

            u = int(M['m10'] / M['m00'])
            v = int(M['m01'] / M['m00'])

            world_xy = self.pixel_to_world(u, v)
            if world_xy is None:
                continue

            world_x, world_y = world_xy

            x, y, w, h = cv2.boundingRect(c)
            cv2.rectangle(debug, (x, y), (x + w, y + h), (0, 255, 0), 2)
            cv2.circle(debug, (u, v), 5, (255, 0, 0), -1)
            cv2.putText(
                debug,
                f'{class_name}: ({world_x:.3f},{world_y:.3f})',
                (x, max(20, y - 8)),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.5,
                (255, 255, 255),
                1
            )

            obj = DetectedObject()
            obj.object_id = f'{id_prefix}_{idx:03d}'
            obj.class_name = class_name
            obj.confidence = 0.95

            pose = PoseStamped()
            pose.header = header
            pose.header.frame_id = 'world'
            pose.pose.position.x = float(world_x)
            pose.pose.position.y = float(world_y)
            pose.pose.position.z = float(self.cube_center_z)
            pose.pose.orientation.x = 0.0
            pose.pose.orientation.y = 0.0
            pose.pose.orientation.z = 0.0
            pose.pose.orientation.w = 1.0
            obj.pose = pose

            size = Vector3()
            size.x = 0.04
            size.y = 0.04
            size.z = 0.04
            obj.size = size

            objects.append(obj)
            idx += 1

        return objects

    def pixel_to_world(self, u, v):
        if self.H is None:
            return None

        pixel_pt = np.array([[[float(u), float(v)]]], dtype=np.float32)
        world_pt = cv2.perspectiveTransform(pixel_pt, self.H)

        world_x = world_pt[0, 0, 0]
        world_y = world_pt[0, 0, 1]
        return world_x, world_y


def main(args=None):
    rclpy.init(args=args)
    node = RealPerceptionNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()