#include "ImageMap.hpp"


/**
 * Construtor da classe ImageMap
 * @param map Mat do mapa
 */
ImageMap::ImageMap( cv::Mat mapMat )
{




	imgBinary( mapMat );

}

void ImageMap::grayScale( cv::Mat& mapMat )
{
	cv::cvtColor( mapMat, mapMat, CV_RGB2GRAY );
}


void ImageMap::imgBinary( cv::Mat& mapMat )
{
	cv::Mat dstDilate;
	cv::Mat dstErode;
	cv::Mat se = cv::getStructuringElement( cv::MORPH_CROSS, cv::Size( 5, 5 ) );

	grayScale(mapMat);

	cv::threshold(mapMat, mapMat, 240, 250, cv::THRESH_BINARY );
	cv::dilate( mapMat, dstDilate, se );
	cv::erode( dstDilate, dstErode, se );
	cv::subtract( dstDilate, dstErode, mapMat);
	cv::imshow("dilate", dstDilate );
	cv::imshow("erode", dstErode );
	cv::imshow("dif", mapMat);
}


