void setup() {

pinMode(3, OUTPUT);
pinMode(5, OUTPUT);
pinMode(7, OUTPUT);
}

void loop() {

  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  delay(500);
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(7, LOW);
  delay(500);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, HIGH);
  delay(500);
}
