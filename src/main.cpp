#include <Arduino.h>
#include "board_definitions.h"

#define ledPin LED_BUILTIN

void setup() {
  delay(5000);
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.print("Hola, soy un: " );
  Serial.println(BOARD);
  delay(5000);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  Serial.println("LED ENCENDIDO");
  delay(250);
  digitalWrite(ledPin, LOW);
  Serial.println("LED APAGADO");
  delay(250);
}
