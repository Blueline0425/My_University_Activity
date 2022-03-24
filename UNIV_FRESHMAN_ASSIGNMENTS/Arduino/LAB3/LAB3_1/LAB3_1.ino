void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
  pinMode(A0,INPUT);

}

void loop() {
  int val=analogRead(A0);
  if(val<=300){
    digitalWrite(9,HIGH);
    }
  else if(val>=900){
    digitalWrite(9,LOW);
    }

}
