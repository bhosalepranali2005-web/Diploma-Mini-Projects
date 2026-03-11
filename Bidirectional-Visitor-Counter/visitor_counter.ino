#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

int sensor1 = 8;
int sensor2 = 9;

int count = 0;

void setup()
{
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);

  lcd.begin(16,2);
  lcd.print("Visitor Counter");

  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(sensor1) == HIGH)
  {
    delay(100);

    if(digitalRead(sensor2) == HIGH)
    {
      count++;
      lcd.clear();
      lcd.print("People: ");
      lcd.print(count);
      Serial.println("Person Entered");
      delay(1000);
    }
  }

  if(digitalRead(sensor2) == HIGH)
  {
    delay(100);

    if(digitalRead(sensor1) == HIGH)
    {
      if(count > 0)
      {
        count--;
      }

      lcd.clear();
      lcd.print("People: ");
      lcd.print(count);
      Serial.println("Person Exited");
      delay(1000);
    }
  }
}