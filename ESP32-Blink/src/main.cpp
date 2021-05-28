#include <Arduino.h>


#define LED 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  Serial.println("La LED est on");
  delay(1000);
  digitalWrite(LED, LOW);
  Serial.println("La LED est off");
  delay(1000);
}
