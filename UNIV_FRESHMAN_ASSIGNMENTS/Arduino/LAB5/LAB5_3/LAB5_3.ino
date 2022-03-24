void setup() {
pinMode(2,OUTPUT);
pinMode(3,INPUT);
Serial.begin(9600);

}

void loop() {
  digitalWrite(2,HIGH);
  delayMicroseconds(50);
  digitalWrite(2,LOW);
  int duration=pulseIn(3,HIGH);
  double centimeter=duration/58.2;
  Serial.println(centimeter);

  if(centimeter>=10){
    tone(8,261.6);
    }
  else if(centimeter<10&&centimeter>=6){
    tone(8,293.6);
    }
  else if(centimeter<6){
    tone(8,329.6);
    }

}
