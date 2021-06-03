
//Motor Control Functions
void goForward(){
    digitalWrite(rmp1,HIGH);
    digitalWrite(rmp2,LOW); 
    digitalWrite(lmp1,HIGH);
    digitalWrite(lmp2,LOW);  
}
void goBackward(){
    digitalWrite(rmp1,LOW);
    digitalWrite(rmp2,HIGH); 
    digitalWrite(lmp1,LOW);
    digitalWrite(lmp2,HIGH);    
}

void leftTurn(){
    digitalWrite(rmp1,HIGH);
    digitalWrite(rmp2,LOW); 
    digitalWrite(lmp1,LOW);
    digitalWrite(lmp2,HIGH);
    }

void rightTurn(){
    digitalWrite(lmp1,HIGH);
    digitalWrite(lmp2,LOW);
    digitalWrite(rmp1,LOW);
    digitalWrite(rmp2,HIGH);
}
void stopCar(){
    digitalWrite(lmp1,LOW);
    digitalWrite(lmp2,LOW);
    digitalWrite(rmp1,LOW);
    digitalWrite(rmp2,LOW);
}
