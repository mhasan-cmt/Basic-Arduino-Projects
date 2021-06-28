#include <Ultrasonic.h>
Ultrasonic hc(D3,D2);//trig, echo
int distance;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
distance=hc.read(CM);
  Serial.println(""+distance);
  Serial.println();}

void loop() 
{ 
  
}
