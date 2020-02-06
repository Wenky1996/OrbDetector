#include<iostream>
#include <opencv2/opencv.hpp>
#include "OrbDetector.h"


using namespace std;
using namespace cv;

int main(int argc ,char** argv){

    cout<<"OpenCV version"<<CV_VERSION<<endl;
    Mat myPrc = imread("/home/zwk/dev/ClionProj/OrbDetector/1.jpg");

    imshow("the resource picture",myPrc);

    vector<KeyPoint>fastKeyPoint;
    //FAST(myPrc,fastKeyPoint,20, true,);       //方式一
    //Ptr<FastFeatureDetector> ptrFAST=FastFeatureDetector::create(40);//方式二
    //ptrFAST->detect(myPrc,fastKeyPoint);
    Mat fastOutImage;
    drawKeypoints(myPrc,fastKeyPoint,fastOutImage,Scalar::all(-1),0);

    imshow("the fast conner dector",fastOutImage);
    waitKey(0);
    return 0;
}