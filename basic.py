import cv2

img1 = cv2.imread("../data/lena.jpg", -1)

cv2.imshow("image", img1)

cv2.waitKey(0)
cv2.destroyAllWindows()
