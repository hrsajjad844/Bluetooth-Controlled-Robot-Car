int lmp1=4, lmp2=5, rmp1=2, rmp2=3;
char incomingData;
#include "function.h"
void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  
}

void loop() {
  if(Serial.available()>0){
    incomingData = Serial.read();
    if(incomingData == 'F'){
      Serial.print("For");
      goForward();
      delay(500);
      stopCar();
    }
    else if(incomingData == 'B'){
      goBackward();
      delay(500);
      stopCar();
    }
    else if(incomingData == 'L'){
      leftTurn();
      delay(500);
      stopCar();
    }
    else if(incomingData == 'R'){
      rightTurn(); 
      delay(500);
      stopCar();
    }
    else if(incomingData == 'X'){;
      stopCar();
    }
    else if(incomingData == 'Y'){
      stopCar();
    }
   
  }
  

}
