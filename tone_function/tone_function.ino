int speaker=D7;


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  tone(speaker,262);
  delay(200);
  tone(speaker,294);
  delay(200);
  tone(speaker,330);
  delay(200);
  tone(speaker,392);
  delay(200);
  tone(speaker,440);
  delay(200);
  noTone(speaker);
  delay(20000);

}
