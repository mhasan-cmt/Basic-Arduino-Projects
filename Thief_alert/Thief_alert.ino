 int trigPin = D0;    
int echoPin = D1;   
int led = D7;
long duration, dist, average;   
long aver[3];   //array for average


void setup() {       
    Serial.begin(9600);
    pinMode(led,OUTPUT);
    pinMode(trigPin, OUTPUT);  
    pinMode(echoPin, INPUT);  
    delay(100);
} 

void measure() {  
 digitalWrite(10,HIGH);
digitalWrite(trigPin, LOW);
delayMicroseconds(5);
digitalWrite(trigPin, HIGH);
delayMicroseconds(15);
digitalWrite(trigPin, LOW);
pinMode(echoPin, INPUT);
duration = pulseIn(echoPin, HIGH);
dist = (duration/2) / 29.1;    //obtain distance
}
void loop() { 
  for (int i=0;i<=2;i++) {   //average distance
    measure();               
   aver[i]=dist;            
    delay(10);              //delay between measurements
  }
 dist=(aver[0]+aver[1]+aver[2])/3;    

if ( dist<70 ) {
//Change distance as per your need
 digitalWrite(led,HIGH); 
 delay(1000);     
}else if(dist>70){
  digitalWrite(led,LOW); 
  delay(500);
}
Serial.print(dist);
}
