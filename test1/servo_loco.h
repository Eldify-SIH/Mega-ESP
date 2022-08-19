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

  for (ServoRightLower_pos = 100; ServoRightLower_pos <= 160; ServoRightLower_pos += 1) {

    ServoRightLower.write(ServoRightLower_pos );
    delay(10);
  }
  Serial.println("Movement 1 - Servo lower: 100-160");
  delay(10);

  for (ServoRightUpper_pos = 80; ServoRightUpper_pos >= 30 ; ServoRightUpper_pos -= 1) {
    ServoRightUpper.write(ServoRightUpper_pos);
    delay(10);
  }
  Serial.println("Movement 2 - Servo upper: 80-30 ");
  delay(10);


  for (ServoRightLower_pos = 160 ; ServoRightLower_pos >= 100; ServoRightLower_pos -= 1) {
    ServoRightLower.write(ServoRightLower_pos );
    delay(10);
  }

  Serial.println("Movement 3 - Servo lower: 160-100");
  delay(10);

  for (ServoLeftLower_pos = 80 ; ServoLeftLower_pos >= 20; ServoLeftLower_pos -= 1) {
    ServoLeftLower.write(ServoLeftLower_pos );
    delay(10);
  }

  Serial.println("Movement 4 - Servo lower: 80-20");
  delay(10);


  for (ServoRightUpper_pos = 30; ServoRightUpper_pos <= 80; ServoRightUpper_pos += 1) {
    ServoRightUpper.write(ServoRightUpper_pos);
    delay(10);
  }
  Serial.println("Movement 5 - Servo upper: 30-80");
  delay(10);


  for (ServoLeftUpper_pos = 100; ServoLeftUpper_pos <= 150; ServoLeftUpper_pos += 1) {
    ServoLeftUpper.write(ServoLeftUpper_pos);
    delay(10);
  }
  Serial.println("Movement 6 - Servo upper: 100-150");
  delay(10);


  for (ServoLeftLower_pos = 20 ; ServoLeftLower_pos <= 80; ServoLeftLower_pos += 1) {
    ServoLeftLower.write(ServoLeftLower_pos );
    delay(10);
  }

  Serial.println("Movement 7 - Servo lower: 20-80");
  delay(10);

  for (ServoLeftUpper_pos = 150; ServoLeftUpper_pos >= 100; ServoLeftUpper_pos -= 1) {
    ServoLeftUpper.write(ServoLeftUpper_pos);
    delay(10);
  }
  Serial.println("Movement 8 - Servo upper: 150-100");
  delay(10);


}
