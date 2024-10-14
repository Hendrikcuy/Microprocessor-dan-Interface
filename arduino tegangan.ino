// Definisi pin potensiometer
int potPin = A0;  // Pin analog yang terhubung ke potensiometer
int potValue = 0; // Variabel untuk menyimpan nilai ADC dari potensiometer
float voltage = 0; // Variabel untuk menyimpan nilai tegangan

void setup() {
  // Inisialisasi komunikasi Serial
  Serial.begin(9600);
}

void loop() {
  // Membaca nilai analog dari potensiometer
  potValue = analogRead(potPin);

  // Mengonversi nilai ADC menjadi tegangan
  voltage = (potValue * 5.0) / 1023.0;

  // Menampilkan nilai ADC dan tegangan di Serial Monitor
  Serial.print("Nilai ADC: ");
  Serial.print(potValue);
  Serial.print(" - Tegangan: ");
  Serial.print(voltage);
  Serial.println(" V");

  // Tunggu sebentar sebelum pembacaan berikutnya
  delay(500);
}
