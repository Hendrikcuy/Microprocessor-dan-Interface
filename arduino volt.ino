// Definisi pin potensiometer
int potPin = A0;  // Pin analog yang terhubung ke potensiometer
int potValue = 0; // Variabel untuk menyimpan nilai potensiometer

void setup() {
  // Inisialisasi komunikasi Serial
  Serial.begin(9600);
}

void loop() {
  // Membaca nilai analog dari potensiometer
  potValue = analogRead(potPin);

  // Menampilkan nilai di Serial Monitor
  Serial.print("Nilai Potensiometer: ");
  Serial.println(potValue);

  // Tunggu sebentar sebelum pembacaan berikutnya
  delay(500);
}

