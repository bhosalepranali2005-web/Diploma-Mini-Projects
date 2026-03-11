int level1 = 2;
int level2 = 3;
int level3 = 4;

int led1 = 8;
int led2 = 9;
int led3 = 10;

void setup()
{
  pinMode(level1, INPUT);
  pinMode(level2, INPUT);
  pinMode(level3, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int l1 = digitalRead(level1);
  int l2 = digitalRead(level2);
  int l3 = digitalRead(level3);

  digitalWrite(led1, l1);
  digitalWrite(led2, l2);
  digitalWrite(led3, l3);

  if(l3 == HIGH)
  {
    Serial.println("Tank Full");
  }
  else if(l2 == HIGH)
  {
    Serial.println("Water Level Medium");
  }
  else if(l1 == HIGH)
  {
    Serial.println("Water Level Low");
  }
  else
  {
    Serial.println("Tank Empty");
  }

  delay(500);
}