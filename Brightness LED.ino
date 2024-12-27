const int potPin = A0;  // Pin potensio
const int ledPin = 2;   // Pin LED

void setup() {
  pinMode(ledPin, OUTPUT);  // Atur pin LED sebagai output
}

void loop() {
  int potValue = analogRead(potPin);  // baca potensiometer nilai (0-1023)
  int brightness = map(potValue, 0, 1023, 0, 255);  //Petakan nilai pot ke nilai PWM (0-255)
  analogWrite(ledPin, brightness);  // Atur brightness
 
}