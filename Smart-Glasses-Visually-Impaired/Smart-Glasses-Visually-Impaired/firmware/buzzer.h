#define BUZZER_PIN 14

void setupBuzzer() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void buzzPattern(float distance) {
  if (distance < 30) {
    digitalWrite(BUZZER_PIN, HIGH);
    delay(100);
    digitalWrite(BUZZER_PIN, LOW);
    delay(100);
  } else if (distance < 60) {
    digitalWrite(BUZZER_PIN, HIGH);
    delay(200);
    digitalWrite(BUZZER_PIN, LOW);
    delay(300);
  } else {
    digitalWrite(BUZZER_PIN, LOW);
  }
}
