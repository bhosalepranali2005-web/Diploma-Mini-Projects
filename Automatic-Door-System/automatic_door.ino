#include <Servo.h>

Servo doorServo;

int irSensor = 2;
int pos = 0;

void setup()
{
  doorServo.attach(9);
  pinMode(irSensor, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = digitalRead(irSensor);

  if(sensorValue == HIGH)
  {
    Serial.println("Person Detected - Door Opening");

    doorServo.write(90);   // open door
    delay(3000);

    Serial.println("Door Closing");
    doorServo.write(0);    // close door
  }

  delay(500);
}