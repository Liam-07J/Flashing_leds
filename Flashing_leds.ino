void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);    //  pin 13 is the 1st led
  pinMode(12, OUTPUT);    //  pin 12 is the 2nd led
  pinMode(11, OUTPUT);    //  pin 11 is the buzzer pin
  Serial.begin(9600);
}

void loop() {
  // Generates random Numbers
  long randomSpeed = random(40,500);
  long randomSpeed2 = random(50,700);
  // Switches LEDs off and on
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(randomSpeed);
  // Switches LEDs off and on
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(randomSpeed2);
  // randomly activates buzzer
  if (random(1,10) == 1){
   analogWrite(11, random(1,255));
   delay(50);
   analogWrite(11, 0);
  }
  delay(randomSpeed);
}
