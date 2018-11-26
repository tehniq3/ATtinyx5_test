/*
sketch adapted by Nicu FLORICA (niq_ro)
*/

int blinkPin = 0;

void setup()
{
  pinMode(blinkPin, OUTPUT);
}

void loop()
{
  digitalWrite(blinkPin, HIGH);
  delay(100);
  digitalWrite(blinkPin, LOW);
  delay(100);
  digitalWrite(blinkPin, HIGH);
  delay(100);
  digitalWrite(blinkPin, LOW);
  delay(700);
}
