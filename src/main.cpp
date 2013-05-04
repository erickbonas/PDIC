#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <list>
#include "ImageMap.hpp"


using namespace cv;


int main( int argc, char** argv )
{
	cv::Mat image;
	image = imread( "data/img/cidadeUniversitaria2.png", 1 );
	//image = imread( "data/img/bonas3.png", 1 );

	//std::list< cv::Mat > lista;
	//lista.push_back( image );
	ImageMap map(image);



	waitKey(0);

	return 0;
}
