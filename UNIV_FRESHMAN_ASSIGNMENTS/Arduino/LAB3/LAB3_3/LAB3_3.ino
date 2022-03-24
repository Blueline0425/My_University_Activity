void setup() {
pinMode(A0,INPUT);//g
pinMode(A1,INPUT);//b
pinMode(A2,INPUT);//r

pinMode(9,OUTPUT);//G
pinMode(10,OUTPUT);//B
pinMode(11,OUTPUT);//R
}

void loop() {
  int val_R=analogRead(A2);
  int val_G=analogRead(A0);
  int val_B=analogRead(A1);

  val_R=map(val_R,0,1023,0,255);
  val_G=map(val_G,0,1023,0,255);
  val_B=map(val_B,0,1023,0,255);

  analogWrite(11,val_R);
  analogWrite(9,val_G);
  analogWrite(10,val_B);

}
