void forwardShort(){
  int value;       
  digitalWrite(DIRA,HIGH);        
  digitalWrite(DIRB, HIGH);
      
  analogWrite(PWMA, 255);   //PWM Speed Control     
  analogWrite(PWMB, 225);   //PWM Speed Control
  delay(250);
}

void forwardMed(){
  int value;      
  digitalWrite(DIRA,HIGH);        
  digitalWrite(DIRB, HIGH);
  
  analogWrite(PWMA, 255);   //PWM Speed Control     
  analogWrite(PWMB, 225);   //PWM Speed Control
  delay(500); 
}

void forwardLong(){
  int value;      
  digitalWrite(DIRA,HIGH);        
  digitalWrite(DIRB, HIGH);
      
  analogWrite(PWMA, 255);   //PWM Speed Control     
  analogWrite(PWMB, 225);   //PWM Speed Control   
  delay(1000); 
}

void stopMovement(){
  analogWrite(PWMA, 0);   //PWM Speed Control     
  analogWrite(PWMB, 0);   //PWM Speed Control  
}

void wallDetectionAlgorithm(){
  Serial.println("Wall Detection Start");
  int wallProximity = 0;
  wallProximity = analogRead(0);
  while(wallProximity >= 200){
    Serial.println("Wall Detection If Initiated");
    right90Forward();
    delay(250);
    wallProximity = analogRead(0);
  }
}
