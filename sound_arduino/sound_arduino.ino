# define SOUND A0
# define BRIGHTNESS 50
int vol = 0;
int count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(9,0);
  analogWrite(10,0);
  analogWrite(11,0);
  vol = analogRead(A0);

  if(vol > 55 and vol < 65){
    analogWrite(10, BRIGHTNESS);  
  } else if(vol >= 65){
    Serial.print("소리:" );
    Serial.println(vol);
    analogWrite(9, BRIGHTNESS);  
    
  }
  delay(100);

}
