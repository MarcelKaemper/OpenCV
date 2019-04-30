#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

void mouseCallback(int event, int x, int y, int flags, void* userdata);

int main(int argc, char** argv){
	
	Mat image = imread("../data/lena.jpg", 1);
	namedWindow("Image", 1);
	setMouseCallback("Image", mouseCallback, NULL);
	imshow("Image", image);

	while(1){
		waitKey(0);
	}
	
	return 0;
}

void mouseCallback(int event, int x, int y, int flags, void* userdata){
	if(event == EVENT_LBUTTONDOWN){
		std::cout << "x: " << x << std::endl << "y: " << y << std::endl;
	}
}
