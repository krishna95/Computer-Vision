#include "../include/shadowRemoval.h"
#include <sys/time.h>
int main(int argc, char* argv[]){

/********************This code is to run the code on an video**************/
/**********

argv[1] : NAME OF THE FILE TO RUN
argv[2] : DEBUGGING : POSITIVE VALUE FOR YES

***********/

/*  cv::VideoCapture capture(argv[1]);
  if (!capture.isOpened()){
      cv::VideoCapture capture(argv[1]);
  }
  cv::Mat original;
  cv::namedWindow("output",1);
  while(1){
    capture >> original;
    cv::namedWindow("original_video",1);
    cv::imshow("original_video",original);
    cv::imwrite("final_output.jpg",original);
    cv::waitKey(20);
    while(original.empty()){
      capture >> original;
    }
    cv::Mat final_image(original.rows,original.cols,CV_8UC3,cvScalarAll(0));
    if (argc == 3){
      ShadowRemoval Shadow(original,atoi(argv[2]));
    	final_image = Shadow.shadowRemoval();
    }
    else{
    cv::waitKey(20);
    	ShadowRemoval Shadow(original,0);
    	final_image = Shadow.shadowRemoval();
    }
    cv::imshow("output",final_image);
  }

*/

/*******************This is to run the code an image***********************************/

    cv::namedWindow("output",1);
    cv::Mat original = cv::imread("./test/hqdefault.jpg",1);
    cv::namedWindow("original_image",1);
    cv::imshow("original_image",original);
    cv::waitKey(0);
    cv::Mat final_image(original.rows,original.cols,CV_8UC3,cvScalarAll(0));
    if (argc == 3){
      ShadowRemoval Shadow(original,atoi(argv[2]));
      final_image = Shadow.shadowRemoval();
    }
    else{
      ShadowRemoval Shadow(original,0);
      final_image = Shadow.shadowRemoval();
    }
    cv::imshow("output",final_image);
    cv::waitKey(0);

}
