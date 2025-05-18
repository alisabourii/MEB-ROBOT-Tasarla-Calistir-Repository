int ENA = 10;
int m1A = 6;
int m1B = 7;

int ENB = 11;
int m2A = 8;
int m2B = 9;

void setup() {
  for(int i=6; i<=9; i++){pinMode(i, OUTPUT);}

}

void loop() {
  ileri();  delay(1500);
  geri();   delay(1500);
  sol();    delay(1500);
  sag();    delay(1500);

}

void ileri(){
  analogWrite(ENA, 1023);
  digitalWrite(m1A, 1);
  digitalWrite(m1B, 0);

  analogWrite(ENB, 1023);
  digitalWrite(m2A, 1);
  digitalWrite(m2B, 0);
}

void geri(){
  analogWrite(ENA, 1023);
  digitalWrite(m1A, 0);
  digitalWrite(m1B, 1);

  analogWrite(ENB, 1023);
  digitalWrite(m2A, 0);
  digitalWrite(m2B, 1);
}

void sol(){
  analogWrite(ENA, 0);
  digitalWrite(m1A, 0);
  digitalWrite(m1B, 0);

  analogWrite(ENB, 1023);
  digitalWrite(m2A, 1);
  digitalWrite(m2B, 0);
}



void sag(){
  analogWrite(ENA, 1023);
  digitalWrite(m1A, 1);
  digitalWrite(m1B, 0);

  analogWrite(ENB, 0);
  digitalWrite(m2A, 0);
  digitalWrite(m2B, 0);
}
