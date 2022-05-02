int Input1 = 11;
int Input2 = 10;
int Speed = 9;

void setup(){
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);

digitalWrite(11,HIGH);
digitalWrite(10,LOW);
analogWrite(9,127);
delay(3000);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
analogWrite(9,0);
delay(2000);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);
analogWrite(9,255);
delay(2000);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
analogWrite(9,0);
}

void loop() {
    
  
  
}
