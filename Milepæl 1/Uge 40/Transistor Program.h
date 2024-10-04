//Ulrik


void loop() {
    //main code, kører i loop
    digitalWrite(LED,HIGH);
    Serial.println("LED is on");
    delay(1000);
    digitalWrite(LED, LOW);
    Serial.println("LED is off");
    delay(1000);
}
