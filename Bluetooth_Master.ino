void setup() {
pinMode(13,OUTPUT);   //left motors forward
pinMode(12,OUTPUT);   //left motors reverse
pinMode(11,OUTPUT);   //right motors forward
pinMode(10,OUTPUT);   //right motors reverse
Serial.begin(9600);
}

void loop() {

Forward();
delay(600);
Stop();
delay(400);
Backward();
delay(500);
Stop();
delay(400);
Right();
delay(300);
Stop();
delay(400);
Left();
delay(300);
Stop();
delay(3000);
}
void Forward()
{
    digitalWrite(12,HIGH);
    digitalWrite(10,HIGH);
    Serial.println("F");
}
void Stop()
{
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  Serial.println("S");
}
void Backward()
{
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
  Serial.println("B");
}


void Left()
{
  digitalWrite(11,HIGH);
  Serial.println("L");
}

void Right()
{
  digitalWrite(13,HIGH);
  Serial.println("R");
}
