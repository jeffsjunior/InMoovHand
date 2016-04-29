/*
 * Finger.h
 *
 *  Created on: Apr 8, 2016
 *      Author: Jefferson Jr
 */

#ifndef FINGER_H_
#define FINGER_H_

#include <VarSpeedServo.h>

class Finger {


private:

	uint8_t m_lowerLimit;
	uint8_t m_upperLimit;
	VarSpeedServo m_servo;
public:
	Finger();
	Finger(uint8_t lowerLimit ,uint8_t upperLimit);
	void init(int pin);
	void openFinger(uint8_t speed);
	void openFinger(uint8_t speed,bool wait);
	void closeFinger(uint8_t speed);
	void closeFinger(uint8_t speed, bool wait);
	void setPos(int pos, uint8_t speed, bool wait);
	virtual ~Finger();
};

#endif /* FINGER_H_ */
