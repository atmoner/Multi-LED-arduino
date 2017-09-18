const int LED1 = 3;
const int LED2 = 5;
const int LED3 = 6;
const int LED4 = 9;
int Dled = 100; 
int pot = A1;  // Défini le pin du potentiometre
 
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  //Serial.println(analogRead(pot) / Dled, DEC); // affiche la variable dans le Terminal Serie
  
  // LED 1
  for ( int i=0; i<=255; i++ ) {
    analogWrite(LED1, i);
    delay(analogRead(pot) / Dled);
  }
  for ( int i=255; i>=0; i-- ) {
    analogWrite(LED1, i);
    delay(analogRead(pot) / Dled);
  }

  // LED 2
  for ( int i=0; i<=255; i++ ) {
    analogWrite(LED2, i);
    delay(analogRead(pot) / Dled);
  }
  for ( int i=255; i>=0; i-- ) {
    analogWrite(LED2, i);
    delay(analogRead(pot) / Dled);
  }

  // LED 3
  for ( int i=0; i<=255; i++ ) {
    analogWrite(LED3, i);
    delay(analogRead(pot) / Dled);
  }
  for ( int i=255; i>=0; i-- ) {
    analogWrite(LED3, i);
    delay(analogRead(pot) / Dled);
  }

  // LED 4
  for ( int i=0; i<=255; i++ ) {
    analogWrite(LED4, i);
    delay(analogRead(pot) / Dled);
  }
  for ( int i=255; i>=0; i-- ) {
    analogWrite(LED4, i);
    delay(analogRead(pot) / Dled);
  }
}
