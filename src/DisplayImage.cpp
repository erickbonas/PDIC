/**

#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <list>

using namespace cv;

int main( int argc, char** argv )
{
	cv::Mat image;
	image = imread( "data/img/rua.png", 1 );

	//std::list< cv::Mat > lista;
	//lista.push_back( image );

	Mat bnImage;

	cv::Mat se ;
	imshow("color map", image);
	cv::cvtColor( image, image, CV_RGB2GRAY );
	imshow("gray map", image);
	//namedWindow( "Color map", CV_WINDOW_AUTOSIZE );
	cv::threshold(image, bnImage, 240, 250, THRESH_BINARY );

	//line( image, Point(240, 380), Point(840, 334), Scalar( 255, 0 ,0  ), 2, 8);
	imshow( "binary map", bnImage );

	waitKey(0);

	return 0;
}
**/
