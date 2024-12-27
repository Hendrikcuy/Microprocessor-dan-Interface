const int potPin = A0;  // Pin Potensio
const int servoPin = 9;  // Pin sinyal servo

#include <Servo.h>

Servo myServo;  // membaut objek servo

void setup() {
  myServo.attach(servoPin);  // Pasang servo ke pin
}

void loop() {
  int potValue = analogRead(potPin);  // membaca nilai potensio
  int servoAngle = map(potValue, 0, 1023, 0, 180);  //Petakan nilai pot ke sudut servo
  myServo.write(servoAngle);  // atur angle servo
  delay(15);  // Tunggu hingga servo bergerak
}