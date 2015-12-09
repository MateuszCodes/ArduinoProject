void left90Forward(){
  digitalWrite(DIRA, HIGH);
  digitalWrite(DIRB, LOW);
  analogWrite(PWMA, 255);
  analogWrite(PWMB, 255);
}

void right90Forward(){
  Serial.println("Right 90 Forward");
  digitalWrite(DIRA, LOW);
  digitalWrite(DIRB, HIGH);
  analogWrite(PWMA, 255);
  analogWrite(PWMB, 255);
}

void left90Back(){
  digitalWrite(DIRA, LOW);
  digitalWrite(DIRB, HIGH);
  analogWrite(PWMA, 255);
  analogWrite(PWMB, 255);
}

void right90Back(){
  digitalWrite(DIRA, HIGH);
  digitalWrite(DIRB, LOW);
  analogWrite(PWMA, 255);
  analogWrite(PWMB, 255);
}
