int flameSensor = 2;
int buzzer = 8;
int led = 7;

void setup()
{
  pinMode(flameSensor, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int flameValue = digitalRead(flameSensor);

  if(flameValue == LOW)
  {
    Serial.println("Fire Detected!");
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
  }
  else
  {
    Serial.println("No Fire");
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }

  delay(500);
}