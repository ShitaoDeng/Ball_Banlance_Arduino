#ifndef _CONFIGURE_H_
#define _CONFIGURE_H_

//motor
#define MOTOR_DEADZONE		10
#define POSITION_LIMIT		500
#define PWM_LIMIT					255
#define SAFETY_ANGLE			1

//remote contorl
#define	CLOCKWISE					0x01
#define	ANTICLOCKWISE			0x03
#define FORWARD						0x02
#define	BACKWARD					0X08
#define	LEFT							0X04
#define	RIGHT							0X06

//pin
#define LED								13	// pin_13
#define MOTOR_1						6		// pin_6  (timer4)
#define MOTOR_2						7		// pin_7  (timer4)
#define MOTOR_3						8		// pin_8  (timer4)
#define DIR_M1_A					22	// pin_22
#define DIR_M1_B					23	// pin_23
#define DIR_M2_A					24	// pin_24
#define DIR_M2_B					25	// pin_25
#define DIR_M3_A					26	// pin_26
#define DIR_M3_B					27	// pin_27
#define SENSOR_INT				0		// pin_2  (external interruption 0)
#define SPD_INT_1					1		// pin_3  (external interruption 0)
#define SPD_INT_2					4		// pin_19 (external interruption 1)
#define SPD_INT_3					5		// pin_18 (external interruption 1)
#define SPD_PUL_1					4		// pin_4
#define SPD_PUL_2					5		// pin_5
#define SPD_PUL_3					9		// pin_9
#define K_AGL_AD					A0	// pin_A0
#define K_AGL_DOT_AD			A1	// pin_A1
#define K_POS_AD					A2	// pin_A2
#define K_POS_DOT_AD			A3	// pin_A3

#endif