//Ulrik
//LED blink program 

#include <Arduino.h>


#define LED 12 //Angivet som D12 på ESP32’eren


void setup () {
// setup code, kør en gang
Serial.begin(115200);
pinMode(LED, OUTPUT);
}


void loop() {
    //main code, kører i loop
    digitalWrite(LED,HIGH);
    Serial.println("LED is on");
    delay(1000);
    digitalWrite(LED, LOW);
    Serial.println("LED is off");
    delay(1000);
}
