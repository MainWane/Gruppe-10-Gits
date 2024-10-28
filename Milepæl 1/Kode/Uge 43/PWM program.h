#include <Arduino.h>
#include <iostream>
// Define two LED pins separately
#define LED1 14
#define LED2 27

void setup() {
  // Set the LED pins as output
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
analogWrite(LED2, 0);  // Set LED2 to PWM value of 0 (off)
}

void loop(){
  // Increase the brightness of both LEDs
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){  
    // Change LED brightness with PWM
    analogWrite(LED1, dutyCycle);
    delay(40); 
  }

  // Decrease the brightness of both LEDs
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){  
    // Change LED brightness with PWM
    analogWrite(LED1, dutyCycle);
    delay(40);
  
  }

}
