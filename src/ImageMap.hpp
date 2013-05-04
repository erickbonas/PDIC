#ifndef IMAGE_MAP_HPP
#define IMAGE_MAP_HPP

#include <string>
#include <opencv2/opencv.hpp>

class ImageMap
{
private:

	cv::Mat image;

	/**
	 * Método responsável por converter a imagem em uma imagem binaria
	 */
	void imgBinary( cv::Mat& mapMat );

	void thinningIteration(cv::Mat& im, int iter);

	void thinning(cv::Mat& im);
	/**
	 * Método responsável por converter a imagem em niveis de cinza	 *
	 */
	void grayScale( cv::Mat& mapMat );

public:
	/**
	 * Construtor
	 * @param filename
	 */
	ImageMap( const cv::Mat mapMat );
};

#endif
