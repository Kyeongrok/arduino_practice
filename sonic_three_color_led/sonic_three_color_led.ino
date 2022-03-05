
void setup() {
  // put your setup code here, to run once:
 
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(11,0);
  analogWrite(10,0);
  analogWrite(9,0);

  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);

  long duration = pulseIn(3, HIGH);
  if(duration == 0){
    return;
  }
  
  long distance = duration / 58.2;

  if(distance < 10){
    analogWrite(11, 255);
  } else if(distance < 20){
    analogWrite(10, 100);
  }else if(distance < 30){
    analogWrite(9, 10);
  }

  delay(100);
}
