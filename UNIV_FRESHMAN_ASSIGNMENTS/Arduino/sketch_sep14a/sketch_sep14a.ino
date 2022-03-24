void setup() {
  // put your setup code here, to run once:

pinMode(10,INPUT);
pinMode(11,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<256;i++){
  analogWrite(10,i);
  delay(1);

  analogWrite(11,255-i);
  delay(1);
  
  }
for(int i=0;i<256;i++){
  analogWrite(10,255-i);
  delay(1);

  analogWrite(11,i);
  delay(1);
  }


}
