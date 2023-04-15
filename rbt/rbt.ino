// motor 1
int ena = 13;
int in1 = 12;
int in2 = 14;

// motor2
int enb = 25;
int in3 = 27;
int in4 = 26;

void forward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  analogWrite(ena, 150);
  analogWrite(enb, 150);
}

void reverse() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  analogWrite(ena, 150);
  analogWrite(enb, 150);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  ledcAttachPin(ena, 0);
  ledcAttachPin(enb, 0);
  ledcSetup(0, 1000, 8);
}

void loop() {
  // put your main code here, to run repeatedly:
  forward();

  delay(5000);

  reverse();

  delay(5000);

}
