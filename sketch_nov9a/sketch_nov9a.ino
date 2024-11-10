int LEDpin[] = {13, 12, 11};
int NEUpin[] = {7, 6, 5};

int level;
int delayT = 1;
int delayL = 1000;

int count;
int permaCount = 100;

void setup() {
  pinMode(LEDpin[0], OUTPUT);
  pinMode(LEDpin[1], OUTPUT);
  pinMode(LEDpin[2], OUTPUT);

  pinMode(NEUpin[0], OUTPUT);
  pinMode(NEUpin[1], OUTPUT);
  pinMode(NEUpin[2], OUTPUT);

  digitalWrite(NEUpin[0], HIGH);
  digitalWrite(NEUpin[1], HIGH);
  digitalWrite(NEUpin[2], HIGH);
}
void loop() {
  
  count = permaCount;
  while (count > 0) { 
    ledON(0, 0);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(0, 0);


  count = permaCount;
  while (count > 0) { 
    ledON(0, 1);
    ledON(1, 0);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(0, 1);
  ledOFF(1, 0);


  count = permaCount;
  while (count > 0) { 
    ledON(2, 0);
    ledON(1, 1);
    ledON(0, 2);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(2, 0);
  ledOFF(1, 1);
  ledOFF(0, 2);

  count = permaCount;
  while (count > 0) { 
    ledON(2, 1);
    ledON(1, 2);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(2, 1);
  ledOFF(1, 2);

  count = permaCount;
  while (count > 0) { 
    ledON(2, 2);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(2, 2);

}

int ledON(int X, int Y) {
  digitalWrite(NEUpin[X], LOW);
  digitalWrite(LEDpin[Y], HIGH);
  delay(delayT);
  digitalWrite(LEDpin[Y], LOW);
  delay(delayT);
  digitalWrite(NEUpin[X], HIGH);
}

int ledOFF(int X, int Y) {
  digitalWrite(NEUpin[X], LOW);
  digitalWrite(LEDpin[Y], LOW);
  delay(delayT);
  digitalWrite(NEUpin[X], HIGH);
}

