#include "Arduino.h"
// 0 - red
// 4 - blue
#define LED_BUILTIN 2 // green

void setup() {
    Serial.begin(115200);
    pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
    digitalWrite(LED_BUILTIN,HIGH);
    Serial.println("Led is on");
    delay(1000);
    digitalWrite(LED_BUILTIN,LOW);
    Serial.println("Led is off");
    delay(1000);

}