#include <Wire.h>
#include <VL53L0X.h>

#define distanceVenstre 16  // Output pin for venstre sensor
#define distanceHøjre 17    // Output pin for højre sensor

VL53L0X sensorVenstre;
VL53L0X sensorHøjre;

void setup()
{
  Serial.begin(9600);

  // Definer pins (default for ESP32 er SDA 21, SCL 22)
  Wire.begin(21, 22);  
  pinMode(distanceVenstre, OUTPUT);
  pinMode(distanceHøjre, OUTPUT);

  // Start venstre sensor
  sensorVenstre.setTimeout(500);
  if (!sensorVenstre.init())
  {
    Serial.println("Failed to detect and initialize left sensor!");
    while (1) {}
  }
  sensorVenstre.setAddress(0x30);  // Set unique I²C address for left sensor?

  // Start højre sensor
  sensorHøjre.setTimeout(500);
  if (!sensorHøjre.init())
  {
    Serial.println("Failed to detect and initialize right sensor!");
    while (1) {}
  }
  sensorHøjre.setAddress(0x31);  // Set unique I²C address for right sensor?

  // Kontinuerlig måling på begge sensorere
  sensorVenstre.startContinuous();
  sensorHøjre.startContinuous();
}

void loop()
{
  // Læs venstre sensor
  int distanceLeft = sensorVenstre.readRangeSingleMillimeters();
  Serial.print("Distance Left: ");
  Serial.println(distanceLeft);

  if (distanceLeft <= 255) {
    analogWrite(distanceVenstre, distanceLeft);
  } else {
    analogWrite(distanceVenstre, 255);  // Cap at 255 for analogWrite
  }

  // Læs højre sensor
  int distanceRight = sensorHøjre.readRangeSingleMillimeters();
  Serial.print("Distance Right: ");
  Serial.println(distanceRight);

  if (distanceRight <= 255) {
    analogWrite(distanceHøjre, distanceRight);
  } else {
    analogWrite(distanceHøjre, 255);  // Cap på 255 for analogWrite
  }
  
//Fejlmeldinger
  if (sensorVenstre.timeoutOccurred()) { Serial.println("TIMEOUT on Left Sensor"); }
  if (sensorHøjre.timeoutOccurred()) { Serial.println("TIMEOUT on Right Sensor"); }

}