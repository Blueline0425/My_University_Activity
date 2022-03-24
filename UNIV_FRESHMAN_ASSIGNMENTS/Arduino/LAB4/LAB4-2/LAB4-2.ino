#include <Servo.h>
Servo myservo;
void setup() {
  myservo.attach(9);

}

void loop() {
  int res=analogRead(A0);
  float servo_rot_val=map(res,0,1023,0,180);
  myservo.write(servo_rot_val);

}
