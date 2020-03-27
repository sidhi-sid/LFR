int s1 = 2;
int s2 = 3;
int s4 = 4;
int s5 = 5;

int lmp1 = 6;
int lmp2 = 7;
int rmp1 = 8;
int rmp2 = 9;

int maxspeed = 255;
int slowspeed = 255;

void setup(){
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  pinMode(s4, INPUT);
  pinMode(s5, INPUT);

  pinMode(lmp1, OUTPUT);
  pinMode(lmp2, OUTPUT);
  pinMode(rmp1, OUTPUT);
  pinMode(rmp2, OUTPUT);
}

void forwmtn(){
    analogWrite(lmp1, maxspeed);
    digitalWrite(lmp2, LOW);
    analogWrite(rmp1, maxspeed);
    digitalWrite(rmp2, LOW);
}

void slowmtn(){
    analogWrite(lmp1, slowspeed);
    analogWrite(lmp2, 0);
    analogWrite(rmp1, slowspeed);
    analogWrite(rmp2, 0);
}

void leftmtn(){
    digitalWrite(lmp1, LOW);
    digitalWrite(lmp2, LOW);
    analogWrite(rmp1, maxspeed);
    digitalWrite(rmp2, LOW);
}

void leftmtnex(){
    digitalWrite(lmp1, LOW);
    analogWrite(lmp2, maxspeed);
    analogWrite(rmp1, maxspeed);
    digitalWrite(rmp2, LOW);
}

void rightmtn(){
    analogWrite(lmp1, maxspeed);
    digitalWrite(lmp2, LOW);
    digitalWrite(rmp1, LOW);
    digitalWrite(rmp2, LOW);
}

void rightmtnex(){
    analogWrite(lmp1, maxspeed);
    digitalWrite(lmp2, LOW);
    digitalWrite(rmp1, LOW);
    analogWrite(rmp2, maxspeed);
}

void loop(){
  if(digitalRead(s1) == HIGH && digitalRead(s2) == HIGH && digitalRead(s4) == HIGH && digitalRead(s5) == HIGH){
    forwmtn();
  }
 
  if(digitalRead(s1) == LOW && digitalRead(s2) == LOW && digitalRead(s4) == LOW && digitalRead(s5) == LOW){
    slowmtn();
  }
 
  if(digitalRead(s1) == HIGH && digitalRead(s2) == HIGH && digitalRead(s4) == LOW && digitalRead(s5) == HIGH){
   rightmtn();
  }
 
  if(digitalRead(s1) == HIGH && digitalRead(s2) == HIGH && digitalRead(s4) == HIGH && digitalRead(s5) == LOW){
   rightmtnex();
   delay(200);
  }
 
  if(digitalRead(s1) == LOW && digitalRead(s2) == HIGH && digitalRead(s4) == HIGH && digitalRead(s5) == HIGH){
    leftmtnex();
    delay(200);
  }
 
  if(digitalRead(s1) == HIGH && digitalRead(s2) == LOW && digitalRead(s4) == HIGH && digitalRead(s5) == HIGH){
    leftmtn();
  }
 
  if(digitalRead(s1) == LOW && digitalRead(s2) == LOW && digitalRead(s4) == HIGH && digitalRead(s5) == HIGH){
    leftmtnex();
  }

  if(digitalRead(s1) == LOW && digitalRead(s2) == LOW && digitalRead(s4) == LOW && digitalRead(s5) == HIGH){
    leftmtnex();
    delay(250);
  }
 
  if(digitalRead(s1) == HIGH && digitalRead(s2) == HIGH && digitalRead(s4) == LOW && digitalRead(s5) == LOW){
   rightmtnex();
  }

  if(digitalRead(s1) == HIGH && digitalRead(s2) == LOW && digitalRead(s4) == LOW && digitalRead(s5) == LOW){
   rightmtnex();
   delay(250);
  }
 
   if(digitalRead(s1) == HIGH && digitalRead(s2) == LOW && digitalRead(s4) == LOW && digitalRead(s5) == HIGH){
    forwmtn();
  }

  if(digitalRead(s1) == LOW && digitalRead(s2) == HIGH && digitalRead(s4) == HIGH && digitalRead(s5) == LOW){
    forwmtn();
  }
  if(digitalRead(s1) == HIGH && digitalRead(s2) == LOW && digitalRead(s4) == HIGH && digitalRead(s5) == LOW){
   rightmtnex();
  }
  if(digitalRead(s1) == LOW && digitalRead(s2) == HIGH && digitalRead(s4) == LOW && digitalRead(s5) == HIGH){
   leftmtnex();
  }
}
