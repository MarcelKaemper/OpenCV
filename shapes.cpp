#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv){
	
	Mat image = imread("../data/lena.jpg", 1);

	rectangle(image, Point(0,0), Point(255,255), Scalar(255,0,0), FILLED);
	line(image, Point(255,255), Point(500,500), Scalar(255,0,0), 20);
	ellipse(image, RotatedRect(Point2f(200,200), Size2f(100,100) , 100), Scalar(0,255,0));

	imshow("Image", image);

	while(1){
		waitKey(0);
	}
	
	return 0;
}
