#include <Servo.h>

int ledPin = 13;  // use the built in LED on pin 13 of the Uno
int state = 0;
int flag = 0;        // make sure that you return the state only once
int servopin = 9;
Servo servo;
int angle = 0;


void setup() {
  // sets the pins as outputs:
  servo.attach(servopin);
  Serial.begin(9600); // Default connection rate for my BT module
}

void loop()
{
  //if some data is sent, read it and save it in the state variable
  if (Serial.available() > 0) {
    state = Serial.read();
    flag = 0;
  }
  // if the state is 0 the led will turn off
  if (state == '0')
  {
    if (flag == 0) {
      Serial.println("Motor: off");
      flag = 1;
    }
    while (angle >= 50)
    {
      angle--;
      delay(10);
      servo.write(angle);
    }

  }
// if the state is 1 the led will turn on
else if (state == '1')
{
  if (flag == 0)
  {
    Serial.println("Motor: on");
    flag = 1;
  }
  while (angle <= 150) {
    angle++;
    delay(10);
    servo.write(angle);
  }
}

}

