const int cinturon = 2;
const int motor = 4;
const int zumbador = 13;
 
int stateC = 0;
int stateM = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(cinturon,INPUT);
  pinMode(motor,INPUT);
  pinMode(zumbador,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  stateC = digitalRead(cinturon);
  stateM = digitalRead(motor);
  
  if(stateC == HIGH and stateM == LOW){
    analogWrite(zumbador,128);
    digitalWrite(LED_BUILTIN,HIGH);
  }
  else{
    digitalWrite(LED_BUILTIN,LOW);
  }
}
