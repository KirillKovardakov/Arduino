int ledState1 = LOW;  
int ledState2 = LOW;  
int ledState3 = LOW;  
int ledState4 = LOW;  

unsigned long previousMillis1 = 0;  
unsigned long previousMillis2 = 0;  
unsigned long previousMillis3 = 0; 
unsigned long previousMillis4 = 0;  

const long interval = 1000;  

void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {

  unsigned long currentMillis =   millis();

  if (currentMillis - previousMillis1 >= 50) {
    previousMillis1 = currentMillis;
    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }
    digitalWrite(3, ledState1);
  } 


  if (currentMillis - previousMillis2 >= 333) {
    previousMillis2 = currentMillis;
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }
    digitalWrite(5, ledState2);
  }

  if (currentMillis - previousMillis3 >= 1000) {
    previousMillis3 = currentMillis;
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }
    digitalWrite(6, ledState3);
  }

  if (currentMillis - previousMillis4 >= 10000) {
    previousMillis4 = currentMillis;
    if (ledState4 == LOW) {
      ledState4 = HIGH;
    } else {
      ledState4 = LOW;
    }
    digitalWrite(9, ledState4);
  }
}
