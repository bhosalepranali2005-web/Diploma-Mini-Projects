int sensorPin = A0;     // Soil moisture sensor pin
int relayPin = 7;       // Relay module pin
int sensorValue = 0;
int threshold = 500;    // Moisture threshold value

void setup()
{
  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);
}

void loop()
{
  sensorValue = analogRead(sensorPin);
  Serial.print("Moisture Value: ");
  Serial.println(sensorValue);

  if(sensorValue > threshold)
  {
    digitalWrite(relayPin, HIGH);  // Turn ON pump
    Serial.println("Soil Dry - Pump ON");
  }
  else
  {
    digitalWrite(relayPin, LOW);   // Turn OFF pump
    Serial.println("Soil Wet - Pump OFF");
  }

  delay(1000);
}