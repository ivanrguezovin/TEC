const int trigger = 2;
const int echo = 3;

void setup() {
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  digitalWrite(trigger, LOW);
}

void loop()
{
  unsigned long t; // Tiempo [μs]
  unsigned long d; // Distancia [cm]
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);// Pulso enviado = 10μs
  digitalWrite(trigger, LOW);
  t = pulseIn(echo, HIGH); // Ancho de pulso
  d = 0.034*t/2; // Conversión a distancia [cm]
  Serial.print("Ancho [μs]: ");
  Serial.print(t);
  Serial.print(" Distancia [cm]: ");
  Serial.println(d);
  delay(100);
}
