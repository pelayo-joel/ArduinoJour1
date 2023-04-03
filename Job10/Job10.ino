const int led = 9;
int brightness = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, brightness);
  delay(30);
  // printf("%i", brightness);
  
  if (brightness < 255)
  {
    brightness++;
  }
  else
  {
    brightness = 0;
  }
}
