void fullMethodTest(){
  
  forwardShort();
  delay(250);
  forwardMed();
  delay(250);
  forwardLong();
  delay(250);
  
  backShort();
  delay(250);
  backMed();
  delay(250);
  backLong();
  delay(250);
  
  left90Forward();
  delay(250);
  right90Forward();
  delay(250);
  left90Back();
  delay(250);
  right90Back();
  delay(250);
}

void spiralForward(){
  forwardShort();
  delay(250);
  right90Forward();
  delay(250);
  forwardShort();
  delay(250);
  right90Forward();
  delay(250);
  forwardMed();
  delay(250);
  right90Forward();
  delay(250);
  forwardMed();
  delay(250);
  right90Forward();
  delay(250);
  forwardLong();
  delay(250);
  right90Forward();
  delay(250);
  forwardLong();
  delay(250);
}

void spiralBack(){
  backLong();
  delay(250);
  right90Back();
  delay(250);
  backLong();
  delay(250);
  right90Back();
  delay(250);
  backMed();
  delay(250);
  right90Back();
  delay(250);
  backMed();
  delay(250);
  right90Back();
  delay(250);
  backShort();
  delay(250);
  right90Back();
  delay(250);
  backShort();
  delay(250);
}

void finalShow(){
  spiralForward();
  spiralBack();
}



void finalShowWithWallDetection(){
  
  Serial.println("Before Wall Detection");  
  wallDetectionAlgorithm();
  Serial.println("After Wall Detection"); 
  
  //Forward Short
  forwardShort();
  delay(250);
  //End Forward Short
  
  stopMovement();
  delay(250);
  
  right90Forward();
  delay(450);
  
  stopMovement();
  delay(250);
  
  Serial.println("Before Wall Detection");  
  wallDetectionAlgorithm();
  Serial.println("After Wall Detection"); 
  
  //Forward Short
  forwardShort();
  delay(250);
  //End Forward Short
  
  stopMovement();
  delay(250);
  
  right90Forward();
  delay(450);
  
  stopMovement();
  delay(250);
  
  Serial.println("Before Wall Detection");  
  wallDetectionAlgorithm();
  Serial.println("After Wall Detection"); 
  
  //Forward Medium
  forwardShort();
  delay(250);
  
  Serial.println("Before Wall Detection");  
  wallDetectionAlgorithm();
  Serial.println("After Wall Detection"); 
  
  forwardShort();
  delay(250);
  //End Forward Medium
  
  stopMovement();
  delay(250);
  
  right90Forward();
  delay(450);
  
  stopMovement();
  delay(250);
  
  Serial.println("Before Wall Detection");  
  wallDetectionAlgorithm();
  Serial.println("After Wall Detection"); 
  
  //Forward Medium
  forwardShort();
  delay(250);
  
  Serial.println("Before Wall Detection");  
  wallDetectionAlgorithm();
  Serial.println("After Wall Detection"); 
  
  forwardShort();
  delay(250);
  //End Forward Medium
  
  stopMovement();
  delay(250);
  
  right90Forward();
  delay(450);
  
  stopMovement();
  delay(250);
  
  Serial.println("Before Wall Detection");  
  wallDetectionAlgorithm();
  Serial.println("After Wall Detection"); 
  
  //Forward Long
  forwardShort();
  delay(250);
  
  Serial.println("Before Wall Detection");  
  wallDetectionAlgorithm();
  Serial.println("After Wall Detection"); 
  
  forwardShort();
  delay(250);
  
  Serial.println("Before Wall Detection");  
  wallDetectionAlgorithm();
  Serial.println("After Wall Detection"); 
  
  forwardShort();
  delay(250);
  
  Serial.println("Before Wall Detection");  
  wallDetectionAlgorithm();
  Serial.println("After Wall Detection"); 
  
  forwardShort();
  delay(250);
  //End Forward Long
  
  stopMovement();
  delay(250);
  
  right90Forward();
  delay(450);
  
  stopMovement();
  delay(250);
  
  Serial.println("Before Wall Detection");  
  wallDetectionAlgorithm();
  Serial.println("After Wall Detection"); 
  
  //Forward Long
  forwardShort();
  delay(250);
  
  Serial.println("Before Wall Detection");  
  wallDetectionAlgorithm();
  Serial.println("After Wall Detection"); 
  
  forwardShort();
  delay(250);
  
  Serial.println("Before Wall Detection");  
  wallDetectionAlgorithm();
  Serial.println("After Wall Detection"); 
  
  forwardShort();
  delay(250);
  
  Serial.println("Before Wall Detection");  
  wallDetectionAlgorithm();
  Serial.println("After Wall Detection"); 
  
  forwardShort();
  delay(250);
  //End Forward Long
  
  stopMovement();
  delay(250);
  
  
  //Back Long
  backShort();
  delay(250);
  
  backShort();
  delay(250);
  
  backShort();
  delay(250);
  
  backShort();
  delay(250); 
  //End Back Long 
  
  stopMovement();
  delay(250);
  
  right90Back();
  delay(450);
  
  stopMovement();
  delay(250);
  
  //Back Long
  backShort();
  delay(250);
  
  backShort();
  delay(250);
  
  backShort();
  delay(250);
  
  backShort();
  delay(250);
  //End Back Long
  
  stopMovement();
  delay(250);
  
  right90Back();
  delay(450);
  
  stopMovement();
  delay(250);
  
  //Back Medium
  backShort();
  delay(250);
  
  backShort();
  delay(250);
  //End Back Medium
  
  stopMovement();
  delay(250);
  
  right90Back();
  delay(450);
  
  stopMovement();
  delay(250);
  
  //Back Medium
  backShort();
  delay(250);
  
  backShort();
  delay(250);
  //End Back Medium
  
  stopMovement();
  delay(250);
  
  right90Back();
  delay(450);
  
  stopMovement();
  delay(250);
  
  //Back Short
  backShort();
  delay(250);
  //End Back Short
  
  stopMovement();
  delay(250);
  
  right90Back();
  delay(450);
  
  stopMovement();
  delay(250);
  
  //Back Short
  backShort();
  delay(250);
  //End Back Short
  
  stopMovement();
  delay(250);
  
}
