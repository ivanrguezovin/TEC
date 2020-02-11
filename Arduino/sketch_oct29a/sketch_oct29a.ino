boolean encendido=false;
int elapsedTime = 50;
int tiempoActual = 0;
int tiempoTranscurrido = 0;
void setup() {
  //pinMode(3, OUTPUT);
  pinMode(2, INPUT_PULLUP);
 }

void loop() {
  if(digitalRead(2)==LOW && !encendido){
    tiempoActual = millis();
    if(millis() - tiempoActual < elapsedTime){
      
    } else {
    analogWrite(3, 255);
    encendido=true;
    }
    }
  else if(digitalRead(2)==LOW && encendido){
    tiempoActual = millis();
    if(millis() - tiempoActual < elapsedTime){
      
    } else {
    analogWrite(3, 0);
    encendido=false;  
    }
  }

}
