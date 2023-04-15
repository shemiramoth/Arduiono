int LED_Pin = 9;
void setup() {
  // put your setup code here, to run once:
  serial.begin(115200);

  // set up pin modes
  pinMode(LED_Pin, OUTPUT);
  digitalWrite(LED_Pin, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

  // blink an LED
  pinMode(10, OUTPUT);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  delay(1000);

}
