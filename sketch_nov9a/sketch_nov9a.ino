int LEDpin = 13;
int LEDpin2 = 12;
int LEDpin3 = 11;
int NEUpin0 = 7;
int NEUpin1 = 6;
int NEUpin2 = 5;
int NEUpin3 = 4;


int level;
int delayT = 1;
void setup() {
  pinMode(LEDpin, OUTPUT);
  pinMode(LEDpin2, OUTPUT);
  pinMode(LEDpin3, OUTPUT);

  pinMode(NEUpin0, OUTPUT);
  pinMode(NEUpin1, OUTPUT);
  pinMode(NEUpin2, OUTPUT);
  pinMode(NEUpin3, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:

  level = 0;

  if (level == 0){
    digitalWrite(NEUpin0, LOW);
    digitalWrite(LEDpin, HIGH);
    delay(delayT);
    digitalWrite(LEDpin, LOW);
    delay(delayT);
    digitalWrite(NEUpin0, HIGH);

    digitalWrite(NEUpin1, LOW);
    digitalWrite(LEDpin2, HIGH);
    delay(delayT);
    digitalWrite(LEDpin2, LOW);
    delay(delayT);
    digitalWrite(NEUpin1, HIGH);
  } else {
    digitalWrite(NEUpin0, LOW);
    digitalWrite(LEDpin, LOW);
    delay(delayT);
    digitalWrite(NEUpin0, HIGH);

    digitalWrite(NEUpin1, LOW);
    digitalWrite(LEDpin2, LOW);
    delay(delayT);
    digitalWrite(NEUpin1, HIGH);
  }

  if (level == 1) {
    digitalWrite(NEUpin2, LOW);
    digitalWrite(LEDpin3, HIGH);
    delay(delayT);
    digitalWrite(LEDpin3, LOW);
    delay(delayT);
    digitalWrite(NEUpin2, HIGH);

    digitalWrite(NEUpin3, LOW);
    digitalWrite(LEDpin, HIGH);
    delay(delayT);
    digitalWrite(LEDpin, LOW);
    delay(delayT);
    digitalWrite(NEUpin3, HIGH);
  } else {
    digitalWrite(NEUpin2, LOW);
    digitalWrite(LEDpin3, LOW);
    delay(delayT);
    digitalWrite(NEUpin2, HIGH);

    digitalWrite(NEUpin3, LOW);
    digitalWrite(LEDpin, LOW);
    delay(delayT);
    digitalWrite(NEUpin3, HIGH);
  }

}


https://devpost.com/software/756676/joins/EHM8GWxkPYi1xhmXLTLsgw
