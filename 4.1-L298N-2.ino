int Input1 = 11;
int Input2 = 10;
int Speed = 9;

void setup(){
pinMode(11,OUTPUT);
}

void loop(){
   digitalWrite(Input1,LOW);
  digitalWrite(Input2,LOW);
  delay(500);
  digitalWrite(Input1,HIGH);
  digitalWrite(Input2,LOW);
  analogWrite(Speed,50);
  delay(500);
  digitalWrite(Input1,HIGH);
  digitalWrite(Input2,LOW);
  analogWrite(Speed,100);
  delay(500);
  digitalWrite(Input1,HIGH);
  digitalWrite(Input2,LOW);
  analogWrite(Speed,150);
  delay(500);
  digitalWrite(Input1,HIGH);
  digitalWrite(Input2,LOW);
  analogWrite(Speed,200);
  delay(500);
  digitalWrite(Input1,HIGH);
  digitalWrite(Input2,LOW);
  analogWrite(Speed,255);
  delay(500);
    digitalWrite(Input1,HIGH);
  digitalWrite(Input2,LOW);
  analogWrite(Speed,255);
  delay(500);
    digitalWrite(Input1,HIGH);
  digitalWrite(Input2,LOW);
  analogWrite(Speed,200);
  delay(500);
  digitalWrite(Input1,HIGH);
  digitalWrite(Input2,LOW);
  analogWrite(Speed,150);
  delay(500);
   digitalWrite(Input1,HIGH);
  digitalWrite(Input2,LOW);
  analogWrite(Speed,100);
  delay(500);
   digitalWrite(Input1,HIGH);
  digitalWrite(Input2,LOW);
  analogWrite(Speed,50);
  delay(500);
   digitalWrite(Input1,LOW);
  digitalWrite(Input2,LOW);
  delay(500);
}
