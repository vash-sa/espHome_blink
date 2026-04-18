#include "Arduino.h"

void my_blink() {
    int pin = 8; // Пин светодиода
    pinMode(pin, OUTPUT);
    
    digitalWrite(pin, HIGH);
    delay(500);
    digitalWrite(pin, LOW);
    delay(500);
}
