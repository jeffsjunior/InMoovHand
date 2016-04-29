// Do not remove the include below
#include "InMoovDescomplexando.h"


//Define the fingers pins
#define  THUMB_PIN   11
#define  INDEX_PIN   10
#define  MIDDLE_PIN  9
#define  RING_PIN    5
#define  PINKY_PIN   3
#define  WRIST_PIN   6



Hand myHand;
int i = 0;

int gest;

void setup()
{
	// Add your initialization code here
	//myFinger.init(servoPin);
	Serial.begin(9600);
	myHand.init(THUMB_PIN,INDEX_PIN,MIDDLE_PIN,RING_PIN,PINKY_PIN,WRIST_PIN);

}


void loop()
{
	Serial.println(myHand.menu());
	while(Serial.available() == 0){};
	gest = Serial.parseInt();
	myHand.runGestures(gest);

}
