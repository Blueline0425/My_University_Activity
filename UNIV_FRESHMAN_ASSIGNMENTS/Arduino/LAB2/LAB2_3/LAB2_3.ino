int Counter=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int button_value = digitalRead(8);
 if(button_value==1){
  Counter=0;
  }
 delay(1000);
 Counter++;
 Serial.print(Counter);
 Serial.println(" sec");
 
}
