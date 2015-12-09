void backShort(){   
  digitalWrite(DIRA, LOW);        
  digitalWrite(DIRB, LOW);            
  analogWrite(PWMA, 225);   //PWM Speed Control     
  analogWrite(PWMB, 255);   //PWM Speed Control     
  delay(250); 
}

void backMed(){      
  digitalWrite(DIRA, LOW);        
  digitalWrite(DIRB, LOW);            
  analogWrite(PWMA, 225);   //PWM Speed Control     
  analogWrite(PWMB, 255);   //PWM Speed Control     
  delay(500); 
}

void backLong(){  
  digitalWrite(DIRA, LOW);        
  digitalWrite(DIRB, LOW);            
  analogWrite(PWMA, 225);   //PWM Speed Control     
  analogWrite(PWMB, 255);   //PWM Speed Control  
  delay(1000); 
}
