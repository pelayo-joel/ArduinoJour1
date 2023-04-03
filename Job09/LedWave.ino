const int leds[] = {1, 2, 3, 4, 5, 6, 7, 8};
const int ledsLength = 8;

void setup()
{
  // put your setup code here, to run once:
  for (int i = 0; i < ledsLength; i++)
  {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < ledsLength; i++)
  {
    digitalWrite(leds[i], HIGH);
    delay(50);
    digitalWrite(leds[i], LOW);
  }
}
