
int ledPin = 9;
int fadeAmount = 5;
int brightness = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(ledPin, brightness);
brightness = brightness + fadeAmount;
if(brightness == 255 || brightness == 0){
 fadeAmount = -fadeAmount; 
}
delay(50);
}
