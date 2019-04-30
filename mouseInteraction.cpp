#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

void mouseCallback(int event, int x, int y, int flags, void* userdata);

int main(int argc, char** argv){
	
	Mat image = imread("../data/lena.jpg", 1);

	imshow("Image", image);
	setMouseCallback("Image", mouseCallback, NULL);


	while(1){
		waitKey(0);
	}
	
	destroyAllWindows();
	return 0;
}

void mouseCallback(int event, int x, int y, int flags, void* userdata){
	if(event == EVENT_LBUTTONDOWN){
			std::cout << "Click" << std::endl;
	}	
}
