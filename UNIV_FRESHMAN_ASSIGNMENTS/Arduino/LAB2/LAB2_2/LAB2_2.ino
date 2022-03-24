void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(8);
  digitalWrite(13,buttonState);
    
}
