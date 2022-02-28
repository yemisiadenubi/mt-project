int sensorVal;
int buttonPressed;
const int ledPin = 2;
const int sensorPin = 3;
const int buttonPin = 9;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);

}



void loop() {
  sensorVal = digitalRead(sensorPin);
  buttonPressed = digitalRead(buttonPin);
  
  if (sensorVal == HIGH) {
    digitalWrite(ledPin, LOW);
    Serial.println(0);}
    else if( buttonPressed == HIGH) {
    digitalWrite(ledPin, HIGH);
    }
    }
    
    
    //} else {
    //digitalWrite(ledPin, HIGH);
    //Serial.println(1);
  
