/*
 * Hand.h
 *
 *  Created on: Apr 8, 2016
 *      Author: Jefferson Jr
 */

#ifndef HAND_H_
#define HAND_H_

#include "Finger.h"


//Define the Servo Limits

const int THUMB_LOWER_LIMIT  = 30;
const int THUMB_UPPER_LIMIT  = 117;

const int INDEX_LOWER_LIMIT  = 45;
const int INDEX_UPPER_LIMIT  = 180;

const int MIDDLE_LOWER_LIMIT = 45;
const int MIDDLE_UPPER_LIMIT = 180;

const int RING_LOWER_LIMIT   = 45;
const int RING_UPPER_LIMIT   = 140;

const int PINKY_LOWER_LIMIT  = 53;
const int PINKY_UPPER_LIMIT  = 135;

const int WRIST_LOWER_LIMIT  = 30;
const int WRIST_UPPER_LIMIT  = 117;

const int FINGER_LOWER_LIMITS[] = {THUMB_LOWER_LIMIT,INDEX_LOWER_LIMIT,
                                  MIDDLE_LOWER_LIMIT,RING_LOWER_LIMIT,
                                  PINKY_LOWER_LIMIT,WRIST_LOWER_LIMIT};
const int FINGER_UPPER_LIMITS[] = {THUMB_UPPER_LIMIT,INDEX_UPPER_LIMIT,
                                  MIDDLE_UPPER_LIMIT,RING_UPPER_LIMIT,
                                  PINKY_UPPER_LIMIT,WRIST_UPPER_LIMIT};

class Hand {

private:
	Finger m_fingers[6];

public:

	const uint8_t FAST = 255;
	const uint8_t SLOW = 55;
	const bool WAIT = true;

	enum hand_enum {
	  thumb = 0,
	  index,
	  middle,
	  ring,
	  pinky,
	  wrist,
	};

	enum gesture {
		count = 1,
		peace,
		rock,
		openH,
		closeH,
		tranquilo
	};

	Hand();
	void init(int tPin,int iPin,int mPin,int rPin,int pPin,int wPin);//
	void test(int finger,int pos,int vel);
	void closeHand(uint8_t speed);
	void openHand(uint8_t speed);
	void openFinger(hand_enum finger,uint8_t speed);
	void openFinger(hand_enum finger,uint8_t speed, bool wait);
	void closeFinger(hand_enum finger,uint8_t speed);
	void closeFinger(hand_enum finger,uint8_t speed, bool wait);

	void runGestures(int gest);
	const char* menu();

	//Gestures
	void countGest();
	void peaceGest();
	void rockGest();
	void tranquilo_favoravel();
	virtual ~Hand();
};

#endif /* HAND_H_ */
