#define IN1	3
#define IN2	9
#define IN3	10
#define IN4	11

void setup()
{
	pinMode(IN1, OUTPUT);
	pinMode(IN2, OUTPUT);
	pinMode(IN3, OUTPUT);
	pinMode(IN4, OUTPUT);
}
 
void Stop(){
	digitalWrite(IN1, LOW);
	digitalWrite(IN2, LOW);
	digitalWrite(IN3, LOW);
	digitalWrite(IN4, LOW);
}
 
void goAhead(){
	digitalWrite(IN1, LOW);
	analogWrite(IN2, 1023);
  digitalWrite(IN3, LOW);
	analogWrite(IN4, 1023);
}
 
void goBack(){
	analogWrite(IN1, 255);
	analogWrite(IN2, LOW);
  analogWrite(IN3, 255);
	analogWrite(IN4, LOW);
}
 
void goRight(){ 
  analogWrite(IN1, 255);
  analogWrite(IN2, LOW);
  analogWrite(IN3, LOW);
  analogWrite(IN4, 255);
}
 
void goLeft(){
  analogWrite(IN1, LOW);
  analogWrite(IN2, 255);
  analogWrite(IN3, 255);
  analogWrite(IN4, LOW);
}
 
void loop()
{
	goAhead();
	delay(1000);

  //Stop();
  delay(1000);
}
