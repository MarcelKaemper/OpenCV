import cv2

def test(event, x, y, flags, param):
    if event == cv2.EVENT_LBUTTONDOWN:
        print("LBUTTON")

img1 = cv2.imread("./data/lena.jpg", -1)

cv2.namedWindow("image", flags=cv2.WINDOW_GUI_NORMAL)
cv2.imshow("image", img1)
cv2.setMouseCallback("image", test)

cv2.waitKey(0)
cv2.destroyAllWindows()
