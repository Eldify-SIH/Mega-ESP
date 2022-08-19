// this sample code provided by www.programmingboss.com
void setup() {
  Serial1.begin(115200);
  Serial.begin(115200);
}
void loop() {
  //  Serial1.println("Hello Boss");
  if (Serial1.available()) {
    String received = Serial1.readString();
    Serial.println(received);
    switch (received[0]) {
      case 'B':
        Serial.println("Mega says Hi from back!");
        break;
      case 'F':
        Serial.println("Mega says Hi from front!");
        break;
      case 'L':
        Serial.println("Mega says Hi from left!");
        break;
      case 'R':
        Serial.println("Mega says Hi from right!");
        break;
      default:
        Serial.println("Mega says Hi from def!");
        break;

    }

  }
}
