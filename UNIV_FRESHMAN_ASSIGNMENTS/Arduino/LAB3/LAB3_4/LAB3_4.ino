int tmp=A0;

void setup() {
Serial.begin(9600);
}

void loop() {
  int val_temp=analogRead(tmp);

  float vol= val_temp * 5000.0/1024.0;
  float cel=(vol-500)/10.0;

  Serial.println(cel);
}
