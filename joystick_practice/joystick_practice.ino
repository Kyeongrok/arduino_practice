void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,INPUT_PULLUP);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(A0) ;
  int y = analogRead(A1) ;
  
  //Serial.print(analogRead(A0)); //X
  //Serial.print(analogRead(A1)); //Y
  Serial.println("");


  // if Serial.print("X:t");
  //if (X
  if (x == 1023){
    Serial.println(" right"); 
  }
  else if(x < 523){
    Serial.println(" left"); 
    
  }
  delay(100);
  
  // Up, Down, Left, Right
  // if Serial.print(analogRead(A0))
     

}
