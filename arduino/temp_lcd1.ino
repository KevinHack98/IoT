#include <LiquidCrystal.h>

const int ledPin = 13;
const int motorPin = 10;
const int sensorPin = A0;

int seconds = 0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

float temperature;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Temperatura!");
}

void loop() {
  int sensorValue = analogRead(sensorPin);

  temperature = (sensorValue * (500.0 / 1024.0)) - 50.0;

  lcd.setCursor(0, 1);
  lcd.print(temperature);
  lcd.println(" C° - ");
  lcd.println(seconds);

  if (temperature <= 10.0) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(motorPin, LOW);
  } else if (temperature > 10.0 && temperature < 26.0) {
    digitalWrite(ledPin, LOW);
    digitalWrite(motorPin, LOW);
  } else if (temperature >= 26.0) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(motorPin, HIGH);
  }

  seconds++;

  delay(1000);
}
