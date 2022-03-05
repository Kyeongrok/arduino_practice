void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(7, 523);
  delay(1000);
  tone(7, 587);
  delay(1000);
}
