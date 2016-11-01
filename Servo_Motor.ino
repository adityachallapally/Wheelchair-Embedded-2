#include <Servo.h>

int servopin = 9;
Servo servo;
int angle = 0;

void setup()
{
  servo.attach(servopin);
}

void loop()
{
  
  for (angle = 50; angle <= 150; angle++)
  {
    delay(10);
    servo.write(angle);
  }
  delay(200);
  for (angle = 150; angle >= 50; angle--)
  {
    delay(10);
    servo.write(angle);
  }
  
  delay(200);

}
