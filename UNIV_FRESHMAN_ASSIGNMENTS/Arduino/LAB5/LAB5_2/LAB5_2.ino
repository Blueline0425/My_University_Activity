void setup() {

}

void loop() {
  if(HIGH==digitalRead(2)){
    tone(8,261.6);
    
    
    }
  else if(HIGH==digitalRead(3)){
    tone(8,293.6);
    }
  else if(HIGH==digitalRead(4)){
    tone(8,329.6);
    }
  else{
    noTone(8);
    }

}
