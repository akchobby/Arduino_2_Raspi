

void setup(){
  Serial.begin(9600); //Setting the baudrate
}

void loop(){
  
  if (Serial.available())
  {
     // reading the string on the line
    String readString = Serial.readString();
    
    //Feedback
    Serial.print("Arduino Received: ");
    Serial.println(readString);
  }
  
  delay(100); //allows smooth operations
}
