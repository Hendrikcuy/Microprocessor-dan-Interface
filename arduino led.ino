// Definisi pin
int potPin = A0;  // Pin analog untuk potensiometer
int ledPin = 9;   // Pin digital PWM untuk LED
int potValue = 0; // Variabel untuk menyimpan nilai potensiometer
int pwmValue = 0; // Variabel untuk menyimpan nilai PWM

void setup() {
  // Inisialisasi komunikasi Serial
  Serial.begin(9600);

  // Setel pin LED sebagai output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Membaca nilai potensiometer (0 hingga 1023)
  potValue = analogRead(potPin);

  // Mengonversi nilai potensiometer ke nilai PWM (0 hingga 255)
  pwmValue = map(potValue, 0, 1023, 0, 255);

  // Mengatur kecerahan LED dengan PWM
  analogWrite(ledPin, pwmValue);

  // Menampilkan nilai potensiometer dan PWM di Serial Monitor
  Serial.print("Nilai Potensiometer: ");
  Serial.print(potValue);
  Serial.print(" - Nilai PWM: ");
  Serial.println(pwmValue);

  // Tunggu sebentar sebelum pembacaan berikutnya
  delay(100);
}
