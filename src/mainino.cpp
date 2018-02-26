#include <Arduino.h>

#define LED_PIN LED_BUILTIN

void setup() {
	pinMode(LED_PIN, OUTPUT);
}

void loop() {
	while (1) {
		digitalWrite(LED_PIN, 1);

		delay(500);

		digitalWrite(LED_PIN, 0);

		delay(500);
	}
}
