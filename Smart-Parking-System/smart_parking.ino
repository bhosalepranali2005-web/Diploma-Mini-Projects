int slot1 = 2;
int slot2 = 3;

int led1 = 8;
int led2 = 9;

void setup()
{
  pinMode(slot1, INPUT);
  pinMode(slot2, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int s1 = digitalRead(slot1);
  int s2 = digitalRead(slot2);

  if(s1 == HIGH)
  {
    digitalWrite(led1, LOW);
    Serial.println("Slot 1 Occupied");
  }
  else
  {
    digitalWrite(led1, HIGH);
    Serial.println("Slot 1 Available");
  }

  if(s2 == HIGH)
  {
    digitalWrite(led2, LOW);
    Serial.println("Slot 2 Occupied");
  }
  else
  {
    digitalWrite(led2, HIGH);
    Serial.println("Slot 2 Available");
  }

  delay(500);
}