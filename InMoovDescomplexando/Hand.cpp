/*
 * Hand.cpp
 *
 *  Created on: Apr 8, 2016
 *      Author: Jefferson Jr
 */

#include "Hand.h"
#include "Arduino.h"

Hand::Hand()
{
	for(int i = thumb; i <= wrist ; i++)
	{
		m_fingers[i] = Finger(FINGER_LOWER_LIMITS[i],FINGER_UPPER_LIMITS[i]);
	}

}

void Hand::init(int tPin,int iPin,int mPin,int rPin,int pPin,int wPin)//
{
	m_fingers[thumb].init(tPin);
	m_fingers[index].init(iPin);
	m_fingers[middle].init(mPin);
	m_fingers[ring].init(rPin);
	m_fingers[pinky].init(pPin);
	m_fingers[wrist].init(wPin);

}
void Hand::test(int finger,int pos,int vel)
{
	m_fingers[finger].setPos(pos,vel,false);
}

const char* Hand::menu()
{
	const char* s  = "Gestures: \n"
			"\t 1 - Count \n"
			"\t 2 - Peace \n"
			"\t 3 - Rock \n"
			"\t 4 - Open \n"
			"\t 5 - Close \n";

	return s;
}


void Hand::closeHand(uint8_t speed) {
	for (int i = thumb; i <= pinky; i++) {
		m_fingers[i].closeFinger(speed);
	}
}

void Hand::openHand(uint8_t speed) {
	for (int i = thumb; i <= pinky; i++) {
		m_fingers[i].openFinger(speed);
	}
}

void Hand::openFinger(hand_enum finger, uint8_t speed)
{
	m_fingers[finger].openFinger(speed);
}

void Hand::openFinger(hand_enum finger, uint8_t speed, bool wait)
{
	m_fingers[finger].openFinger(speed, wait);
}


void Hand::closeFinger(hand_enum finger,uint8_t speed)
{
	m_fingers[finger].closeFinger(speed);
}


void Hand::closeFinger(hand_enum finger,uint8_t speed, bool wait)
{
	m_fingers[finger].closeFinger(speed, wait);
}
void Hand::runGestures(int gest)
{
	switch(gest)
	{
	case count: countGest(); break;
	case peace: peaceGest(); break;
	case rock: rockGest(); break;
	case openH: openHand(SLOW); break;
	case closeH: closeHand(SLOW); break;
	case tranquilo: tranquilo_favoravel(); break;
	}
}

//Gestures definition

void Hand::countGest()
{
	closeHand(FAST);
	delay(200);
	openFinger(index,SLOW,WAIT);
	delay(200);
	openFinger(middle,SLOW,WAIT);
	delay(200);
	openFinger(ring,SLOW,WAIT);
	delay(200);
	openFinger(pinky,SLOW,WAIT);
	delay(200);
	openFinger(thumb,SLOW,WAIT);
	delay(200);
	closeFinger(index,FAST);
	closeFinger(middle,FAST);
	closeFinger(ring,FAST);
	closeFinger(pinky,FAST);
	delay(200);
	openFinger(index,SLOW,WAIT);
	delay(200);
	openFinger(middle,SLOW,WAIT);
	delay(200);
	openFinger(ring,SLOW,WAIT);
	delay(200);
	openFinger(pinky,SLOW,WAIT);

}

void Hand::peaceGest()
{
	closeFinger(thumb,SLOW);
	openFinger(index,SLOW);
	openFinger(middle,SLOW);
	closeFinger(ring,SLOW);
	closeFinger(pinky,SLOW);
}
void Hand::rockGest()
{
	closeFinger(thumb,SLOW);
	openFinger(index,SLOW);
	closeFinger(middle,SLOW);
	closeFinger(ring,SLOW);
	openFinger(pinky,SLOW);
}

void Hand::tranquilo_favoravel()
{
	openFinger(thumb,SLOW);
	closeFinger(index,SLOW);
	closeFinger(middle,SLOW);
	closeFinger(ring,SLOW);
	openFinger(pinky,SLOW);
	for(int i = 0; i < 4; i++)
	{
		openFinger(wrist,SLOW,WAIT);
		delay(300);
		closeFinger(wrist,SLOW,WAIT);
		delay(300);
	}
	m_fingers[wrist].setPos(90,SLOW,false);
}
Hand::~Hand() {
	// TODO Auto-generated destructor stub
}

