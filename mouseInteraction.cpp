#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv){
	
	Mat image = imread("../data/lena.jpg", 1);



	imshow("Image", image);

	while(1){
		waitKey(0);
	}
	
	return 0;
}
