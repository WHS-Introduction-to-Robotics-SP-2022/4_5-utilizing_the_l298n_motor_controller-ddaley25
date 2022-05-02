int Input1 = 11;
int Input2 = 10;
int Speed = 9;

void setup(){
pinMode(11,OUTPUT);

   digitalWrite(Input1,HIGH);
  digitalWrite(Input2,LOW);
  analogWrite(Speed,255);
  delay(5000);
  digitalWrite(Input1,HIGH);
  digitalWrite(Input2,LOW);
  analogWrite(Speed,0);
  
}

void loop(){}
