#ifndef IMU_EKF_H
#define IMU_EKF_H
#include <math.h>
#include <stddef.h>
#include <stdlib.h>

extern void IMU_EKF(float P[16], float q[4], const float Cov_info[3], const
                    float omega[3], float accel[3], float mag[3], float dt,
                    signed char ini, signed char use_mag);

#endif
