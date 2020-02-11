#define umbralInferior 100.0
#define umbralSuperior 200.0
#define LED 2

float vR = 0.0;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  vR = analogRead(A0);

  if(vR > umbralSuperior){  //Serial.println("e");}
    digitalWrite(LED,HIGH);
  }
  else if(vR < umbralInferior){ //Serial.println("a");}
    digitalWrite(LED,LOW);  }
}
