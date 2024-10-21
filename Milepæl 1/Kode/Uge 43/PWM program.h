#include <Arduino.h>


#define LED 19


void setup() {
  // set the LED as an output
  pinMode(LED, OUTPUT);
}


void loop(){
  // increase the LED brightness
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){  
    // changing the LED brightness with PWM
    analogWrite(LED, dutyCycle);
    delay(40);
  }


  // decrease the LED brightness
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    // changing the LED brightness with PWM
    analogWrite(LED, dutyCycle);
    delay(40);
  }
}
