#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int sensorPin = A0;
float temperature;

void setup()
{
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = analogRead(sensorPin);

  float voltage = sensorValue * (5.0 / 1023.0);
  temperature = voltage * 100;

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp:");

  lcd.setCursor(0, 1);
  lcd.print(temperature);
  lcd.print(" C");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  delay(1000);
}