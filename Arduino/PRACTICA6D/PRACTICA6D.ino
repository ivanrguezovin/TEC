void setup() {
 pinMode(3,OUTPUT);
 pinMode(2,INPUT_PULLUP);
}
boolean flag = true;
void loop() {
 if(digitalRead(2)== LOW && flag==true){
  flag = !flag;
  digitalWrite(3,HIGH);
  }
 if(digitalRead(2) == LOW && flag == false){
  flag=!flag;
  digitalWrite(3,LOW);
  }
 
}
