int LEDpin[] = {13, 12, 11, 10, 9, 8};
int NEUpin[] = {5, 4, 3, 2, 1, 0};

int level;
int delayT = 1;
int delayL = 0;

int count;
int permaCount = 100;

void setup() {
  pinMode(LEDpin[0], OUTPUT);
  pinMode(LEDpin[1], OUTPUT);
  pinMode(LEDpin[2], OUTPUT);
  pinMode(LEDpin[3], OUTPUT);
  pinMode(LEDpin[4], OUTPUT);
  pinMode(LEDpin[5], OUTPUT);

  pinMode(NEUpin[0], OUTPUT);
  pinMode(NEUpin[1], OUTPUT);
  pinMode(NEUpin[2], OUTPUT);
  pinMode(NEUpin[3], OUTPUT);
  pinMode(NEUpin[4], OUTPUT);
  pinMode(NEUpin[5], OUTPUT);

  digitalWrite(NEUpin[0], HIGH);
  digitalWrite(NEUpin[1], HIGH);
  digitalWrite(NEUpin[2], HIGH);
  digitalWrite(NEUpin[3], HIGH);
  digitalWrite(NEUpin[4], HIGH);
  digitalWrite(NEUpin[5], HIGH);
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
    ledON(0, 1);
    ledON(1, 0);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(0, 1);
  ledOFF(1, 0);

  count = permaCount;
  while (count > 0) { 
    ledON(0, 0);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(0, 0);

  count = permaCount;
  while (count > 0) { 
    ledON(0, 0);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(0, 0);

  count = permaCount;
  while (count > 0) { 
    ledON(3, 3);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(3, 3);

  count = permaCount;
  while (count > 0) { 
    ledON(3, 4);
    ledON(4, 3);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(3, 4);
  ledOFF(4, 3);

  count = permaCount;
  while (count > 0) { 
    ledON(5, 3);
    ledON(4, 4);
    ledON(3, 5);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(5, 3);
  ledOFF(4, 4);
  ledOFF(3, 5);

  count = permaCount;
  while (count > 0) { 
    ledON(5, 4);
    ledON(4, 5);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(5, 4);
  ledOFF(4, 5);

  count = permaCount;
  while (count > 0) { 
    ledON(5, 5);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(5, 5);

  count = permaCount;
  while (count > 0) { 
    ledON(5, 4);
    ledON(4, 5);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(5, 4);
  ledOFF(4, 5);

  count = permaCount;
  while (count > 0) { 
    ledON(5, 3);
    ledON(4, 4);
    ledON(3, 5);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(5, 3);
  ledOFF(4, 4);
  ledOFF(3, 5);

  count = permaCount;
  while (count > 0) { 
    ledON(3, 4);
    ledON(4, 3);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(3, 4);
  ledOFF(4, 3);

  count = permaCount;
  while (count > 0) { 
    ledON(3, 3);
    count = count - 1;
  }
  delay(delayL);
  ledOFF(3, 3);

  // count = permaCount;
  // while (count > 0) { 
  //   ledON(1, 0);
  //   ledON(2, 0);
  //   ledON(0, 0);
  //   ledON(0, 1);
  //   ledON(0, 2);
  //   ledON(1, 1);
  //   ledON(1, 2);
  //   ledON(2, 1);
  //   ledON(2, 2);
  //   count = count - 1;
  // }
  // delay(delayL);
  // ledOFF(1, 0);
  // ledOFF(2, 0);
  // ledOFF(0, 0);
  // ledOFF(0, 1);
  // ledOFF(0, 2);
  // ledOFF(1, 1);
  // ledOFF(1, 2);
  // ledOFF(2, 1);
  // ledOFF(2, 2);
  // delay(1000);

}

int ledON(int X, int Y) {
  digitalWrite(NEUpin[X], LOW);
  digitalWrite(LEDpin[Y], HIGH);
  delay(delayT);
  digitalWrite(LEDpin[Y], LOW);
  digitalWrite(NEUpin[X], HIGH);
}

int ledOFF(int X, int Y) {
  digitalWrite(NEUpin[X], LOW);
  digitalWrite(LEDpin[Y], LOW);
  delay(delayT);
  digitalWrite(NEUpin[X], HIGH);
}

