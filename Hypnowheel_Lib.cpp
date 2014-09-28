#include "Hypnowheel_Lib.h"

#include <Arduino.h>

void ledOn(byte led) {
	ledArray[led].state = ON;
	digitalWrite(CLK, HIGH);
	digitalWrite(CLK, LOW);
	digitalWrite(LE, HIGH);
	digitalWrite(LE, LOW);
}

void ledOff(byte led) {
	ledArray[led].state = OFF;
	digitalWrite(CLK, HIGH);
	digitalWrite(CLK, LOW);
	digitalWrite(LE, HIGH);
	digitalWrite(LE, LOW);
}
