/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservoX;  // create servo object to control a servo
Servo myservoY;

int potpinX = 0;  // analog pin used to connect the potentiometer
int valX;    // variable to read the value from the analog pin
int potpinY = 1;
int valY;

void setup() {
  myservoX.attach(3);  // attaches the servo on pin 9 to the servo object
  myservoY.attach(5);
}

void loop() {
  valX = analogRead(potpinX);            // reads the value of the potentiometer (value between 0 and 1023)
  valX = map(valX, 0, 1023, 0, 360);     // scale it to use it with the servo (value between 0 and 180)
  myservoX.write(valX);                  // sets the servo position according to the scaled value

  valY = analogRead(potpinY);            
  valY = map(valY, 0, 1023, 0, 360);     
  myservoY.write(valY);
  
  delay(15);                           // waits for the servo to get there
}
