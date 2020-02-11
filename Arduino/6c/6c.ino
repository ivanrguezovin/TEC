boolean motor = false;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT_PULLUP);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) == LOW && motor == false){
    delay(500);
    digitalWrite(3,HIGH);
    motor = true;
  }
  if(digitalRead(2) == LOW && motor == true){
    delay(500);
    digitalWrite(3,LOW);
    motor = false;
  }
}
