// Pin LED
int led1 = 11;
int led2 = 12;
int led3 = 13;

// Variabel untuk mengatur waktu nyala
int delayTime = 500; // 500ms atau 0.5 detik

void setup() {
  // Set pin sebagai output
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // Nyala LED dari kiri ke kanan
  digitalWrite(led1, HIGH);  // LED1 ON
  digitalWrite(led2, LOW);   // LED2 OFF
  digitalWrite(led3, LOW);   // LED3 OFF
  delay(delayTime);          // Tunggu selama delayTime

  digitalWrite(led1, LOW);   // LED1 OFF
  digitalWrite(led2, HIGH);  // LED2 ON
  digitalWrite(led3, LOW);   // LED3 OFF
  delay(delayTime);

  digitalWrite(led1, LOW);   // LED1 OFF
  digitalWrite(led2, LOW);   // LED2 OFF
  digitalWrite(led3, HIGH);  // LED3 ON
  delay(delayTime);

  // Nyala LED dari kanan ke kiri (kembali)
  digitalWrite(led1, LOW);   // LED1 OFF
  digitalWrite(led2, HIGH);  // LED2 ON
  digitalWrite(led3, LOW);   // LED3 OFF
  delay(delayTime);

  digitalWrite(led1, HIGH);  // LED1 ON
  digitalWrite(led2, LOW);   // LED2 OFF
  digitalWrite(led3, LOW);   // LED3 OFF
  delay(delayTime);
}
