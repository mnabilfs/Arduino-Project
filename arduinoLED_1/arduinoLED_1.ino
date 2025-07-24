#define ledGreen1 2
#define ledGreen2 4
#define buttonSpeedUp 6

void setup() {
  Serial.begin(9600); //baud rate | monitoring log input
  
  pinMode(buttonSpeedUp, INPUT);
  // default state = 1
  digitalWrite(buttonSpeedUp, HIGH); //default state

  pinMode(ledGreen1, OUTPUT);
  pinMode(ledGreen2, OUTPUT);

}

void speedMode(int option){
  if(option == 1){ // mode led kedip cepat
    digitalWrite(ledGreen1, HIGH);
    delay(100);
    digitalWrite(ledGreen1, LOW);
    digitalWrite(ledGreen2, HIGH);
    delay(100);
    digitalWrite(ledGreen2, LOW);
  } else { // mode led kedip lambat
    digitalWrite(ledGreen1, HIGH);
    delay(500);
    digitalWrite(ledGreen1, LOW);
    digitalWrite(ledGreen2, HIGH);
    delay(500);
    digitalWrite(ledGreen2, LOW);
  }
}

void loop() {
  int isButtonSpeedPressed = digitalRead(buttonSpeedUp);
  if(isButtonSpeedPressed == 0){ //jika tombol ditekan
    speedMode(1);
  } else {
    speedMode(0);
  }
}
