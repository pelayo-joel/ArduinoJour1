const int led1 = 1;
const int led2 = 2;

void setup()
{
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);
  blink(led2);
  delay(300);
  digitalWrite(led1, LOW);
  delay(300);
  digitalWrite(led1, HIGH);
}

void blink(int led)
{
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
}
