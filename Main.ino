int DIRA = 12;
int DIRB = 13;

int PWMA = 3;
int PWMB = 11;

void setup(){
  pinMode(DIRA, OUTPUT);
  pinMode(DIRB, OUTPUT);
  
  Serial.begin(1200);
}

void loop(){
  
  //fullMethodTest();
  
  //finalShow();
  
  finalShowWithWallDetection();
  
  //wallDetection();
  
}
