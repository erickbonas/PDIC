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

	/**
	 * Perform one thinning iteration.
	 * Normally you wouldn't call this function directly from your code.
	 *
	 * @param  im    Binary image with range = 0-1
	 * @param  iter  0=even, 1=odd
	 */
	void thinningIteration(cv::Mat& im, int iter);

	/**
	 * Function for thinning the given binary image
	 *
	 * @param  im  Binary image with range = 0-255
	 */
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
