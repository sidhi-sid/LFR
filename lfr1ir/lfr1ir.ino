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

void setup() {
  pinMode(s1, INPUT);

  pinMode(lmp1, OUTPUT);
  pinMode(lmp2, OUTPUT);
  pinMode(rmp1, OUTPUT);
  pinMode(rmp2, OUTPUT);
}

void leftmtn() {
  digitalWrite(lmp1, LOW);
  analogWrite(lmp2,100);
  analogWrite(rmp1, maxspeed);
  digitalWrite(rmp2, LOW);
}

void rightmtn() {
  analogWrite(lmp1, maxspeed);
  digitalWrite(lmp2, LOW);
  digitalWrite(rmp1, LOW);
  analogWrite(rmp2, 100);
}
void forwardmtn() {
  analogWrite(lmp1, maxspeed);
  digitalWrite(lmp2, LOW);
  analogWrite(rmp1, maxspeed);
  digitalWrite(rmp2, LOW);
}

void loop() {
  /*if (digitalRead(s1) == HIGH && digitalRead(s2) == HIGH && digitalRead(s4) == HIGH && digitalRead(s5) == HIGH)
  {
    forwardmtn();*/
 
  if (digitalRead(s1) == HIGH  ) {
    rightmtn();
  }

  else if (digitalRead(s1) == LOW) {
    leftmtn();
  }
}
