/*
 * Finger.cpp
 *
 *  Created on: Apr 8, 2016
 *      Author: Jefferson Jr
 */

#include "Finger.h"



Finger::Finger()
{
	m_lowerLimit = 0;
	m_upperLimit = 180;
}

Finger::Finger(uint8_t lowerLimit = 0, uint8_t upperLimit = 180):
	m_lowerLimit(lowerLimit),
	m_upperLimit(upperLimit){}

void Finger::init(int pin)
{
	m_servo.attach(pin);
}

void Finger::openFinger(uint8_t speed)
{
	m_servo.write(m_lowerLimit,speed);
}

void Finger::openFinger(uint8_t speed,bool wait)
{
	m_servo.write(m_lowerLimit,speed,wait);
}

void Finger::closeFinger(uint8_t speed)
{
	m_servo.write(m_upperLimit,speed);
}

void Finger::closeFinger(uint8_t speed, bool wait)
{
	m_servo.write(m_upperLimit,speed, wait);
}

void Finger::setPos(int pos, uint8_t speed, bool wait)
{
	if (pos > m_upperLimit)
		pos = m_upperLimit;
	else if (pos < m_lowerLimit)
		pos = m_lowerLimit;

	m_servo.write(pos,speed,wait);

}

Finger::~Finger() {
	// TODO Auto-generated destructor stub
}

