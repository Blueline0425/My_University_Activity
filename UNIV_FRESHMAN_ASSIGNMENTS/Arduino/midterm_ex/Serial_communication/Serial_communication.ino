char ib=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    int ib=Serial.read();
    Serial.print("PRINT:");
    Serial.println(ib);
    Serial.print("WRITE:");
    Serial.write(ib);
  
  }
}
