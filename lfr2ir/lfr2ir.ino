int lmpin1 = 6;
int lmpin2 = 7;
int rmpin1 = 8;
int rmpin2 = 9;
int lir = 2;
int rir = 5;

void setup() {
  pinMode(lmpin1, OUTPUT);
  pinMode(lmpin2, OUTPUT);
  pinMode(rmpin1, OUTPUT);
  pinMode(rmpin2, OUTPUT);
  pinMode(lir, INPUT);
  pinMode(rir, INPUT);
}

void loop() {
  if (digitalRead(lir) == HIGH  && digitalRead(rir) == HIGH) {
   digitalWrite(lmpin1, HIGH);
   digitalWrite(lmpin2, LOW);
   digitalWrite(rmpin1, HIGH);
   digitalWrite(rmpin2, LOW);
  }
  if (digitalRead(lir) == LOW  && digitalRead(rir) == HIGH) {
   digitalWrite(lmpin1, LOW);
   digitalWrite(lmpin2, 127);
   digitalWrite(rmpin1, HIGH);
   digitalWrite(rmpin2, LOW);
  }
  if (digitalRead(lir) == HIGH  && digitalRead(rir) == LOW) {
   digitalWrite(lmpin1, HIGH);
   digitalWrite(lmpin2, LOW);
   digitalWrite(rmpin1, LOW);
   digitalWrite(rmpin2, 127);
  }
  if (digitalRead(lir) == LOW  && digitalRead(rir) == LOW) {
   digitalWrite(lmpin1, HIGH);
   digitalWrite(lmpin2, LOW);
   digitalWrite(rmpin1, HIGH);
   digitalWrite(rmpin2, LOW);    
 }
}
