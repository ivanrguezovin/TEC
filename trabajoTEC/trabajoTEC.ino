/*
Robot TEC: declaración de constantes
*/
// los pines digitales 2 y 3 controlan el motor derecho
 const int In1 = 2; // pin motor derecho 

const int In2 = 3; // pin motor derecho
// los pines digitales 4 y 5 controlan el motor izquierdo
const int In3 = 4; // pin motor izquierdo
const int In4 = 5; // pin motor izquierdo
//los pines digitales 9 y 10 habilitan los motores
const int ENA = 9; // habilita el motor derecho
const int ENB = 10; // habilita el motor izquierdo
//Sensor óptico
const int PhotoSensorLeft = 6; // pin del Arduino conectado al sensor óptico Izquierdo
const int PhotoSensorRight = 7; // pin del Arduino conectado al sensor óptico Derecho
// constantes
const int BLANCO = 0;
const int NEGRO = 1;

void setup() {
 pinMode(In1,OUTPUT);
 pinMode(In2,OUTPUT);
 
 pinMode(In3,OUTPUT);
 pinMode(In4,OUTPUT);

 pinMode(ENA,OUTPUT);
 pinMode(ENB,OUTPUT);

 pinMode(PhotoSensorLeft, INPUT);
 pinMode(PhotoSensorRight, INPUT);
}

void loop() {
  if(digitalRead (PhotoSensorLeft)== NEGRO && digitalRead(PhotoSensorRight)== BLANCO){
       parar();
       girarDerecha();
       delay(500);
  }
   if(digitalRead (PhotoSensorLeft)== BLANCO && digitalRead(PhotoSensorRight)== NEGRO){
       parar();
       girarIzquierda();
       delay(500);
  }
   if(digitalRead (PhotoSensorLeft)== NEGRO && digitalRead(PhotoSensorRight)== NEGRO){
       girarHaciaAdelante();
       delay(500);
  }
  if(digitalRead (PhotoSensorLeft)== BLANCO && digitalRead(PhotoSensorRight)== BLANCO){
       parar();
       girarHaciaAtras();
       delay(2000);
  }
  
}
void girarHaciaAdelante(){
  //giro hacia adelante del motor derecho 
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  //giro hacia adelante del motor izquierdo
  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
  //habilitar motor derecho
  digitalWrite(ENA,HIGH);
  //habilitar motor izquierdo
  digitalWrite(ENB,HIGH);
  }
  void girarHaciaAtras(){
  //giro hacia atras del motor derecho 
  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  //giro hacia atras del motor izquierdo
  digitalWrite(In3,LOW);
  digitalWrite(In4,HIGH);
  //habilitar motor derecho
  digitalWrite(ENA,HIGH);
  //habilitar motor izquierdo
  digitalWrite(ENB,HIGH);
  }
void parar(){
  //Parar motor derecho
  digitalWrite(ENA,LOW);
  //Parar motor izquierdo
  digitalWrite(ENB,LOW);
}
void girarDerecha(){
  //giro hacia atrás del motor derecho
 digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  //giro hacia adelante del motor izquierdo
  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
  //habilitar motor derecho
  digitalWrite(ENA,HIGH);
  //habilitar motor izquierdo
  digitalWrite(ENB,HIGH);
}
void girarIzquierda(){
  //giro hacia adelante del motor derecho
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  //giro hacia atrás del motor izquierdo
  digitalWrite(In3,LOW);
  digitalWrite(In4,HIGH);
  //habilitar motor derecho
  digitalWrite(ENA,HIGH);
  //habilitar motor izquierdo
  digitalWrite(ENB,HIGH);
}
