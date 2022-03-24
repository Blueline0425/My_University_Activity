void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,OUTPUT);

}

void loop() 
{
  if(Serial.available()){
    
  int value = Serial.read();
  for(int i=0;i<value-48;i++){
    digitalWrite(8,HIGH);
    delay(700);
    digitalWrite(8,LOW);
    delay(700);
    
    }

    
  }
  delay(100);

  
}
