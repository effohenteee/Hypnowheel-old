/************************************
Fonte Clanton
Hypnowheel Code
************************************/

#include "Hypnowheel_Lib.h"

void setup() {
	// Set all pins to output
	pinMode(SDI, OUTPUT);
	pinMode(CLK, OUTPUT);
	pinMode(LE, OUTPUT);
	pinMode(OE, OUTPUT);

	// Set all pins low
	digitalWrite(CLK, LOW);
	digitalWrite(LE, LOW);
}


int i = 0;
void loop() {
    delay(250);
    pinOn(i%48);
    refresh();
	delay(250);
	pinOff(i%48);
	refresh();
	i++;
}
