// Include the Servo library
#include <Servo.h>
// Declare the Servo pins
const int servo1Pin = 9;
const int servo2Pin = 11;
const int servo3Pin = 12;
const int servo4Pin = 3;

//Declare analog pins
const int SW = 4;
int SW_STAT = 0;
const int joyx = 0;
const int joyy = 1;
int joyValx;
int joyDegx = 90;
int joyValy;
int joyDegy = 90;

//Buttons
const int UBUT = 6;
int UBUT_VAL = 0;
const int DBUT = 7;
int DBUT_VAL = 0;
int butDeg = 90;

// Create a servo object
Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;

void setup() {
  // We need to attach the servo to the used pin number
  Servo1.attach(servo1Pin);
  Servo2.attach(servo2Pin);
  Servo3.attach(servo3Pin);
  Servo4.attach(servo4Pin);

  //pins for analog stick
  pinMode(SW, INPUT);
  digitalWrite(SW, HIGH);
  Serial.begin(9600);

  //pins for buttons


}
void loop() {
  //fast version to control 2
  /*joyVal = analogRead(joyx);
    joyVal = map( joyVal, 0, 1023, 0, 180);
    Servo1.write(joyVal);

    joyVal = analogRead(joyy);
    joyVal = map( joyVal, 0, 1023, 0, 180);
    Servo2.write(joyVal);*/

  if (analogRead(joyx) <= 400) {
    joyDegx--;
  } else if (analogRead(joyx) <= 650) {

  } else if (analogRead(joyx) > 680) {
    joyDegx++;
  }
  //Serial.println(analogRead(joyx));
  //Serial.println(joyDegx);
  Servo1.write(joyDegx);

  delay(20);

  if (analogRead(joyy) <= 400) {
    joyDegy--;
  } else if (analogRead(joyy) <= 650) {

  } else if (analogRead(joyy) > 680) {
    joyDegy++;
  }
  //Serial.println(analogRead(joyy));
  //Serial.println(joyDegy);
  Servo2.write(joyDegy);

  //Button section
  UBUT_VAL = digitalRead(UBUT);
  DBUT_VAL = digitalRead(DBUT);
  //Serial.println(DBUT_VAL);
  if (DBUT_VAL == HIGH) {
    butDeg--;
    Servo3.write(butDeg);
  }

  if (UBUT_VAL == HIGH) {
    butDeg++;
    Servo3.write(butDeg);
  }

  //Switch code
  //Servo4.write(120);  
  Serial.println(digitalRead(SW));
  if(digitalRead(SW) == HIGH){
    Servo4.write(120);
  } else {
    Servo4.write(150);
  }

}
