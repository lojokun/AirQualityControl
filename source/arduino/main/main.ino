#include "dht.h"

dht DHT;

#define DHT11_PIN 10

int LDRPin = A0;
int LDRValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  LDRValue = analogRead(LDRPin);
  Serial.print("LDRValue = ");
  Serial.println(LDRValue);
  
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(1000);
}
