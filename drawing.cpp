#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

Mat image;
void mouseCallback(int event, int x, int y, int flags, void* userdata);

int main(int argc, char** argv){
	
	namedWindow("Image", 1);
	setMouseCallback("Image", mouseCallback, NULL);
	image = imread("../data/lena.jpg", 1);

	while(1){
		imshow("Image", image);
		waitKey(1);
	}
	
	return 0;
}

void mouseCallback(int event, int x, int y, int flags, void* userdata){
	if(event == EVENT_LBUTTONDOWN){
		ellipse(image, RotatedRect(Point2f(x,y), Size2f(25,25), 0), Scalar(255,255,0), FILLED);
	}
}

