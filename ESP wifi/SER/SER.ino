#include <SoftwareSerial.h>
SoftwareSerial mySerial(3,2);// RX, TX
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
while(!Serial){;}
Serial.println("hardware serial!");
mySerial.begin(9600);
mySerial.println("software seria");
}

void loop() {
  // put your main code here, to run repeatedly:
if(mySerial.available())
Serial.write(mySerial.read());
if (Serial.available())
mySerial.write(Serial.read());
}
