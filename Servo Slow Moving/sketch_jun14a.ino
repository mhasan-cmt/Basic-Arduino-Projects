#include <Servo.h>

Servo myservo;
int ios;
void setup() {
  myservo.attach(D7);

}

void loop() {
  for(int i=0;i<=180;i++){
    myservo.write(i);
  }
  delay(500);
  for( int i=180;i>=0;i--){
    myservo.write(i);
  }
}
