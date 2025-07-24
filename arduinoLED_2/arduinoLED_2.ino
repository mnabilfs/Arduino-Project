#define ledGreen1 2
#define ledGreen2 4
#define ledGreen3 6
#define ledGreen4 8
#define buttonSpeedUp 10

void setup() {
  Serial.begin(9600); //baud rate | monitoring log input
  
  pinMode(buttonSpeedUp, INPUT);
  // default state = 1
  digitalWrite(buttonSpeedUp, HIGH); //default state

  pinMode(ledGreen1, OUTPUT);
  pinMode(ledGreen2, OUTPUT);
  pinMode(ledGreen3, OUTPUT);
  pinMode(ledGreen4, OUTPUT);

}

void speedMode(int option){
  if(option == 1){ // mode led kedip cepat
    digitalWrite(ledGreen1, HIGH);
    delay(50);
    digitalWrite(ledGreen1, LOW);
    digitalWrite(ledGreen2, HIGH);
    delay(50);
    digitalWrite(ledGreen2, LOW);
    digitalWrite(ledGreen3, HIGH);
    delay(50);
    digitalWrite(ledGreen3, LOW);
    digitalWrite(ledGreen4, HIGH);
    delay(50);
    digitalWrite(ledGreen4, LOW);
  } else { // mode led kedip lambat
    digitalWrite(ledGreen1, HIGH);
    delay(150);
    digitalWrite(ledGreen1, LOW);
    digitalWrite(ledGreen2, HIGH);
    delay(150);
    digitalWrite(ledGreen2, LOW);
    digitalWrite(ledGreen3, HIGH);
    delay(150);
    digitalWrite(ledGreen3, LOW);
    digitalWrite(ledGreen4, HIGH);
    delay(150);
    digitalWrite(ledGreen4, LOW);
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