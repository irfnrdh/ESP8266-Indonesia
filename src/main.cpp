// ESP8266 Indonesia
// oleh @irfnrdh
// Rilis 0.4
// Konek Wi-fi dengan indikator LED (Kedua)

#include <ESP8266WiFi.h>

const char* ssid="Manye name wifi engko?";
const char* password = "passw0rdnye manye?";


void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN,LOW);

  Serial.begin(9600);
  Serial.println();
  Serial.print("Wifi nak konek ne ");
  Serial.println( ssid );

  WiFi.begin(ssid,password);

  Serial.println();
  Serial.print("Tengah konek ne");

  while( WiFi.status() != WL_CONNECTED ){
      delay(500);
      Serial.print(".");        
  }

  digitalWrite( LED_BUILTIN , HIGH);
  Serial.println();

  Serial.println("Kaba Mende, Wifi dah konek!");
  Serial.print("Alamat engko ne : ");
  Serial.println(WiFi.localIP() );

}

void loop() {
  // cadek usah ko pike ke kali ne

}