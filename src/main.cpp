// ESP8266 Indonesia
// oleh @irfnrdh
// Rilis 0.3
// LED Bawaan Dak-dik-duk (Pertama)

#include <Arduino.h>

void setup() {
  // letak output aliran
  pinMode(D4,OUTPUT);
  Serial.begin(9600);
  Serial.println();
  Serial.print("Mulai berjalan!");
}

void loop() {
  digitalWrite(D4, HIGH); //dakk
  delay(1000); // dukk
  digitalWrite(D4, LOW); //dikk
  delay(1000); // dukk
}