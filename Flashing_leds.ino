void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  long randomSpeed = random(40,500);
  long randomSpeed2 = random(50,700);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(randomSpeed);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(randomSpeed2);
}
