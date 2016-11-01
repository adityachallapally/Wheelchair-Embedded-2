int signal=48;
int output = 0;
int flag = 0;
int previous_signal = 48;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if (Serial.available()>0)
  {
    signal = Serial.read();
  }


if (signal != previous_signal)
{
output = map(signal, 48, 57, 0, 255);
analogWrite(11 , output);
Serial.println("Sound Changed To: ");
Serial.println(output); 
}
previous_signal = signal;

}
