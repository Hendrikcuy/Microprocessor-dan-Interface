#include <Servo.h>  // Menggunakan library Servo

// Definisi pin
int potPin = A0;    // Pin analog untuk potensiometer
int potValue = 0;   // Variabel untuk menyimpan nilai potensiometer
int servoAngle = 0; // Variabel untuk menyimpan nilai sudut servo

Servo myServo;      // Membuat objek servo

void setup() {
  // Inisialisasi komunikasi Serial
  Serial.begin(9600);

  // Menghubungkan servo ke pin digital 9
  myServo.attach(9);
}

void loop() {
  // Membaca nilai potensiometer (0 hingga 1023)
  potValue = analogRead(potPin);

  // Mengonversi nilai potensiometer ke sudut servo (0 hingga 180 derajat)
  servoAngle = map(potValue, 0, 1023, 0, 180);

  // Mengatur sudut servo
  myServo.write(servoAngle);

  // Menampilkan nilai potensiometer dan sudut servo di Serial Monitor
  Serial.print("Nilai Potensiometer: ");
  Serial.print(potValue);
  Serial.print(" - Sudut Servo: ");
  Serial.println(servoAngle);

  // Tunggu sebentar sebelum pembacaan berikutnya
  delay(100);
}
