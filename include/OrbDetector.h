//
// Created by zwk on 20-1-5.
//

// @Time : 20-1-5 下午10:50
// @Author : WenkyJong
// @Site : MianYang SWUST
// @File : OrbDetector.cpp
// @Contact: wenkyjong1996@gmail.com
// @desc:

#ifndef ORBDETECTOR_ORBDETECTOR_H
#define ORBDETECTOR_ORBDETECTOR_H

#include <opencv2/opencv.hpp>

class OrbDetector{
public:
    OrbDetector(int N_);

private:
    int N{256};
};


#endif //ORBDETECTOR_ORBDETECTOR_H
