#include <Servo.h>
Servo myServo;
void setup() {
  myServo.attach(D1);
  myServo.write(0);

}

void loop() {
  myServo.write(180);
  delay(1000);
  myServo.write(0);
  delay(1000);

}
