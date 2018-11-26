/*
sketch adapted by Nicu FLORICA (niq_ro)
*/


int pwmPin = 0;
int timp = 15;

void setup()
{
  pinMode(pwmPin, OUTPUT);
}

void loop()
{
for (int i=0; i<=255; i+=5)
{
  analogWrite(pwmPin, i);
  delay(timp);
}

for (int i=255; i>=0; i-=5)
{
  analogWrite(pwmPin, i);
  delay(timp);
}
}
