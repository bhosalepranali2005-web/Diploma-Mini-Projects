int ldr = A0;
int relay = 7;
int threshold = 500;

void setup() {
  pinMode(relay, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldr);
  Serial.println(ldrValue);

  if (ldrValue < threshold) {
    digitalWrite(relay, HIGH);  // Light ON
  } else {
    digitalWrite(relay, LOW);   // Light OFF
  }

  delay(500);
}