//#include <Servo.h>
//#include <ESP32Servo.h>

Servo ServoRightUpper;

Servo ServoRightLower;
Servo ServoLeftUpper;

Servo ServoLeftLower;
int ServoRightUpper_pos = 0;

void servoSetup() {
  ServoRightUpper.attach(19);
  ServoRightLower.attach(18);
  ServoLeftUpper.attach(17);
  ServoLeftLower.attach(16);

//  Serial.begin(9600);
}

void locoLoop() {

  int ServoRightUpper_pos = 100 ;
  int ServoRightLower_pos = 80;
  int ServoLeftUpper_pos = 100 ;
  int ServoLeftLower_pos = 80;

}
