import cv2

img = cv2.imread('/tmp/perception_debug.png')

points = []

def on_mouse(event, x, y, flags, param):
    if event == cv2.EVENT_LBUTTONDOWN:
        points.append((x, y))
        print(f'clicked: ({x}, {y})')
        cv2.circle(img, (x, y), 5, (0, 0, 255), -1)
        cv2.putText(img, f'{x},{y}', (x+5, y-5),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0,0,255), 1)
        cv2.imshow('img', img)

cv2.imshow('img', img)
cv2.setMouseCallback('img', on_mouse)
cv2.waitKey(0)
cv2.destroyAllWindows()

print('final points =', points)
