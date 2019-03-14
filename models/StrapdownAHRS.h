//
// Created by yangcheng on 2019/3/13.
//

#ifndef LOCATION_STRAPDOWNAHRS_H
#define LOCATION_STRAPDOWNAHRS_H

#include "Eigen/Dense"

class StrapdownAHRS {
public:

    // 捷联式姿态更新.
    Eigen::Vector4d
    StrapdownUpdateAttitude(Eigen::Vector4d &q_attitude, Eigen::Vector3d &gyro, Eigen::Vector3d &acc);
};


#endif //LOCATION_STRAPDOWNAHRS_H
