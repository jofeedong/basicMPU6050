# basicMPU6050
### Author: XXXmags
### Contact: https://www.rcgroups.com/forums/member.php?u=189488

The purpose of this library is to make a basic and lightweight interface for the MPU6050. It can do the following:
- Configure the inbuilt low pass filter 
- Configure the sensitivity of the accelerometer and gyro
- Retrieve raw output of sensor
- Output scaled accelerometer and gyro values

The library includes two functions to calibrate the gyro and remove bias. The first is intended to be called when the sensor is turned on and is not moving. It takes a long term average of the output of each axis and subtracts these values from the raw signals.

The second function is designed to update the averages. It updates the values with a moving average and the gain is controlled by something akin to a kalman filter. By polling this function one can correct for drift in the gyro bias.

By combining these two functions one can obtain stable and consistent gyro outputs. The accelerometer needs to calibrated manually by correcting for bias and scale. 
