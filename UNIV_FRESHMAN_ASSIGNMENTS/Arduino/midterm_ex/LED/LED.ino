void setup() {
  // put your setup code here, to run once:

pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<256;i++){
  analogWrite(10,i);
  analogWrite(11,255-i);
  delay(5);
  
  }
for(int K=0;K<256;K++){
  analogWrite(11,K);
  analogWrite(10,255-K);
  delay(5);
  }


}
