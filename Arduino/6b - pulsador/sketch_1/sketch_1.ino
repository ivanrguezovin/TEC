  const int d2 = 2;
  const int led = 13;

  int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(d2,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(d2);
  
  if(buttonState == LOW){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}
