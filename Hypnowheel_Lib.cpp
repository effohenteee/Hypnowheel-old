#include "Hypnowheel_Lib.h"

#include <Arduino.h>

// Abstraction for turning on an entire LED
void ledOn(byte led) {
    led = led * 3;  // Convert LED number to the pin number
	ledArray[led].state = ON;
	ledArray[led+1].state = ON;
	ledArray[led+2].state = ON;

	// Each LED is RBG and a set of three pins
	// Color functionality will come later
}

// Abstraction for turning off an entire LED
void ledOff(byte led) {
    led = led * 3;  // Convert LED number to the pin number
	ledArray[led].state = OFF;
	ledArray[led+1].state = OFF;
	ledArray[led+2].state = OFF;

	// This one should be fine since LED off should
	// turn off all pins
}

// Abstraction for turning on individual pins
void pinOn(byte led) {
	ledArray[led].state = ON;

}

// Abstraction for turning off individual pins
void pinOff(byte led) {
	ledArray[led].state = OFF;
}

// Abstraction for updating the LED display
void refresh() {
	unsigned int i;

	for(i = 0; i < NUM_LEDS*3; i++) {
		if(ledArray[47-i].state == ON) {
			digitalWrite(SDI, HIGH);
		}

		else {
			digitalWrite(SDI, LOW);
		}

		digitalWrite(CLK, HIGH);
		digitalWrite(CLK, LOW);
	}

	digitalWrite(LE, HIGH);
	digitalWrite(LE, LOW);
}
