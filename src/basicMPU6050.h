#include "Arduino.h"
#include <Wire.h>

#ifndef basicMPU6050_h
#define basicMPU6050_h

//---------------- Default settings ------------------ 

#define 		    DEFAULT_BAND 	16					// Standard deviation of gyro
#define 		    DEFAULT_COUNT 	10000				// Samples of gyro average
#define 			DEFAULT_LP		6					// Low pass filter setting [0 to 6]
constexpr float 	DEFAULT_SCALE = 1;					// Scale of Gyro and Accelerometer

// Sensor values
#define 		    MPU_ADDRESS     0x68				
#define 		    ACCEL_LBS_0     16384.0
#define 		    N_AXIS          3

// Template parameters
#include "templates.tpp"

//---------------- Class definition ------------------ 
		
template <TEMPLATE_TYPE_DEFAULT>
class basicMPU6050 {
   private:       
    float mean[N_AXIS] = {0};    
    float var = 0;
    
	// Common settings
    static const float ACCEL_LBS;
    static const float GYRO_LBS;
    static const float MEAN;
	
	// I2C communication
	void setRegister(uint8_t, uint8_t);
    void readRegister( uint8_t );
    int readWire();

   public: 
    void setup();

    //-- Raw measurements
    
    // Accel
    int rawAx();
    int rawAy();
    int rawAz();

    // Temp
    int rawTemp();

    // Gyro
    int rawGx();
    int rawGy();
    int rawGz();

    //-- Scaled measurements

    // Accel
    float ax();
    float ay();
    float az();

    // Temp
    float temp();

    // Gyro
    float gx();
    float gy();
    float gz();
	
    //-- Gyro bias estimate        
    void setBias();
    void updateBias();
};

#include "basicMPU6050.tpp"
 
#endif