import cv2

img = cv2.imread("./data/lena.jpg", 1)

img = cv2.circle(img, (255,255), 100, (0,255,255), -1)
img = cv2.line(img, (500,0), (255,255), (255,0,0), 10)
img = cv2.arrowedLine(img, (0,0), (255,500), (255,0,0), 10)
img = cv2.rectangle(img, (0,0), (255,255), (255,0,0), 10,)
font = cv2.FONT_HERSHEY_SIMPLEX
img = cv2.putText(img, "OpenCV", (10,400), font, 2, (255,255,255), 10, cv2.LINE_AA)

cv2.imshow("image", img)

cv2.waitKey(0)
cv2.destroyAllWindows()