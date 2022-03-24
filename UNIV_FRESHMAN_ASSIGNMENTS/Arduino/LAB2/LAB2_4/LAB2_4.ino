int button_R;
int button_G;
int button_B;

void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);//R
  pinMode(3,INPUT);//G
  pinMode(4,INPUT);//B
  
  pinMode(9,OUTPUT);//G
  pinMode(10,OUTPUT);//R
  pinMode(11,OUTPUT);//B

}

void loop() {
  // put your main code here, to run repeatedly:
  button_R = digitalRead(2);
  button_G = digitalRead(3);
  button_B = digitalRead(4);

  digitalWrite(9,button_G);
  digitalWrite(10,button_R);
  digitalWrite(11,button_B);

  

}
