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

const int PhotoSensorLeft = 6; // pin del Arduino conectado al sensor óptico Izquierdo
const int PhotoSensorRight = 7; // pin del Arduino conectado al sensor óptico Derecho
// constantes
const int BLANCO = 0;
const int NEGRO = 1;

boolean girar=false;

void setup() {
  //usados para moverse
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);

  pinMode(PhotoSensorLeft, INPUT);
  pinMode(PhotoSensorRight, INPUT);
 
}

void loop() {
 if (digitalRead(PhotoSensorLeft) == BLANCO && digitalRead(PhotoSensorRight) == BLANCO) {
    girar_derecha_atras();
    delay(80);
  } else if (digitalRead(PhotoSensorLeft) == NEGRO && digitalRead(PhotoSensorRight) == NEGRO) {
    avanzar();
    //delay(30);
  } else if (digitalRead(PhotoSensorLeft) == BLANCO && digitalRead(PhotoSensorRight) == NEGRO) {
    girar_derecha();
  } else if (digitalRead(PhotoSensorLeft) == NEGRO && digitalRead(PhotoSensorRight) == BLANCO) {
    girar_izquierda();
  }
}

void avanzar() {
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
}

void retroceder() {
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
}

void parar() {
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
}

void girar_izquierda() {
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
}

void girar_derecha() {
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
}

void girar_derecha_atras() {
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
}

void girar_izquierda_atras() {
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
}
