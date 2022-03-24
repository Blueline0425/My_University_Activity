void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int Counter=0;
 while(1){
 delay(1000);
 Counter++;
 Serial.print(Counter);
 Serial.println(" sec");
 }
}
