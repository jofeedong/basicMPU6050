//--------------- Template Parameters ---------------- [ No characters after backlash! ]

// Defaut inputs:
#define TEMPLATE_TYPE_DEFAULT 					 	\
	uint8_t  	    DLPF_CFG  	= DEFAULT_LP		,\
    uint8_t  	    FS_SEL    	= 0					,\
    uint8_t 		AFS_SEL  	= 0					,\
	int16_t 		AX_OFS    	= 0					,\
	int16_t      	AY_OFS    	= 0					,\
	int16_t       	AZ_OFS    	= 0					,\
	const float*  	AX_S  		= &DEFAULT_SCALE	,\
	const float*  	AY_S  		= &DEFAULT_SCALE	,\
	const float*  	AZ_S  		= &DEFAULT_SCALE	,\
	const float*  	GX_S  		= &DEFAULT_SCALE	,\
	const float*  	GY_S  		= &DEFAULT_SCALE	,\
	const float*  	GZ_S  		= &DEFAULT_SCALE	,\
	uint16_t 	    GYRO_BAND 	= DEFAULT_BAND		,\
	uint32_t 	    N_BIAS    	= DEFAULT_COUNT   	
		
// Variable types:
#define TEMPLATE_TYPE_INPUTS 						\
	uint8_t  	    DLPF_CFG						,\
    uint8_t  	    FS_SEL							,\
    uint8_t  	    AFS_SEL							,\
	int16_t       	AX_OFS							,\
	int16_t       	AY_OFS							,\
	int16_t       	AZ_OFS							,\
	const float*  	AX_S							,\
	const float*  	AY_S							,\
	const float*  	AZ_S							,\
	const float*  	GX_S							,\
	const float*  	GY_S							,\
	const float*  	GZ_S							,\
	uint16_t 	    GYRO_BAND						,\
	uint32_t 	    N_BIAS	    					

// Variable names:
#define TEMPLATE_INPUTS 							\
					DLPF_CFG  				    	,\
					FS_SEL    						,\
					AFS_SEL  						,\
					AX_OFS    						,\
					AY_OFS    						,\
					AZ_OFS    						,\
					AX_S  					    	,\
					AY_S  							,\
					AZ_S  					    	,\
					GX_S  					    	,\
					GY_S  				 	    	,\
					GZ_S  							,\
					GYRO_BAND 						,\
					N_BIAS    	    				 
		