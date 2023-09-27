int led = 10;
 int bt1 = 8;
 int bt2 = 9;
 int on = HIGH;
 int off = LOW;

int level = 255;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(bt1, INPUT);
  pinMode(bt2, INPUT);
  analogWrite(led, 255);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(level);
  if(digitalRead(bt1) == on)
  {
    delay(50);
    level -= 17;
    analogWrite(led, level);
  }
  while(level<0){level=0;}
  
  if(digitalRead(bt2) == on)
  {
    delay(50);
    level += 17;
    analogWrite(led, level);
  }
  while(level>255)(level=255);
}