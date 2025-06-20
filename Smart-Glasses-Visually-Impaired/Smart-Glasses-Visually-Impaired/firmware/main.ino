#include "ultrasonic_sensor.h"
#include "buzzer.h"
#include "i2c_oled.h"
#include "esp32_ble.h"

void setup() {
  Serial.begin(115200);
  setupUltrasonic();
  setupBuzzer();
  setupOLED();
  setupBLE();
}

void loop() {
  float distance = getDistance();
  displayDistance(distance);

  if (distance < 100) {
    buzzPattern(distance);
  }

  sendBLE(distance);
  delay(100);
}
