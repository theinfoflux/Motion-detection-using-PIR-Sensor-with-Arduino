int pirsensor=3;
int relay=2;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pirsensor,INPUT);
pinMode(relay,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int pirstatus=digitalRead(pirsensor);
Serial.println(pirstatus);
if(pirstatus==HIGH)
{
  digitalWrite(relay,HIGH);
  Serial.println("buzzer on");
  delay(2000);
  digitalWrite(relay,LOW);
  }
}
