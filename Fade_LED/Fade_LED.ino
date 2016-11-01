int pin = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
for (pin = 6; pin<=9; pin++)
  {
    digitalWrite(pin, HIGH);
    delay(300);
  }
  
for (pin = 6; pin<=9; pin++)
  {
    digitalWrite(pin, LOW);
    delay(300);
  }
for (pin = 9; pin>=6; pin--)
  {
    digitalWrite(pin, HIGH);
    delay(300);
  }

for (pin = 9; pin>=6; pin--)
  {
    digitalWrite(pin, LOW);
    delay(300);
  }

}
