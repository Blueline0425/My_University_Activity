void setup() {
  // put your setup code here, to run once:
pinMode(A1,INPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

int button=digitalRead(10);

  
  if(button==0)
  {
    int val=analogRead(A1);
    val=map(val,0,1023,0,255);
    analogWrite(9,val);
  }
  else{
    analogWrite(9,val);
  }

}
