int gasSensor = A0;
int buzzer = 8;
int led = 7;

int threshold = 400;

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int gasValue = analogRead(gasSensor);

  Serial.print("Gas Level: ");
  Serial.println(gasValue);

  if(gasValue > threshold)
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    Serial.println("WARNING! Gas Leakage Detected!");
  }
  else
  {
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }

  delay(500);
}