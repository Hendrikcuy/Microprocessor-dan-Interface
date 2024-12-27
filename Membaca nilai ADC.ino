const int potPin = A0;  // input potensio ke arduino

void setup() {
  Serial.begin(9600);  // Inisialisasi komunikasi serial pada 9600 bps
}

void loop() {
  int adcValue = analogRead(potPin);  // membaca ADC dari Potensio
  float voltage = (adcValue * 5.0) / 1023.0;  // convert ADC 

  Serial.print("ADC Value: ");
  Serial.print(adcValue);
  Serial.print(" | Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(500);  // delay selama 500 untuk membaca selanjutnya
}