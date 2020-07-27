//
//  ImageProcess.hpp
//  opencvios
//

#ifndef ImageProcess_hpp
#define ImageProcess_hpp

#include <stdio.h>
#import <opencv2/opencv.hpp>

// Filter image with Canny filter
cv::Mat filterCanny(cv::Mat src);

// Filter image with simple Threshold
cv::Mat filterThreshold(cv::Mat src);

#endif /* ImageProcess_hpp */
