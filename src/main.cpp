#include <Arduino.h>

void setup() {
  // letak output aliran
  pinMode(D4,OUTPUT);
  Serial.begin(9600);
  Serial.println();
  Serial.print("Mulai berjalan!");

}

void loop() {
  digitalWrite(D4, HIGH);
  delay(1000);
  digitalWrite(D4, LOW);
  delay(1000);
  // put your main code here, to run repeatedly:
}