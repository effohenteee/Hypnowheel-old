#ifndef HYPNOWHEEL_LIB_H
#define HYPNOWHEEL_LIB_H

#define SDI 2
#define CLK 13
#define LE 12
#define OE 11

#define NORMAL 0
#define SPECIAL 1

#define NUM_LEDS 16

#include <Arduino.h>

enum State { OFF, ON };

struct LED {
	byte intensity = 0;	// 0-255
	State state = OFF;
} static ledArray[48];

void ledOn(byte);
void ledOff(byte);
void pinOn(byte);
void pinOff(byte);
void refresh();

#endif
