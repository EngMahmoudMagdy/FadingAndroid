


int ledPin = 9;    // LED connected to digital pin 9
int potpin = A0 ;  // potentiometer pin analog A0
int pinread ; 
void setup() {
  // nothing happens in setup
  pinMode(potpin,INPUT); 
   pinMode(ledPin,OUTPUT); 
  
}

void loop() {
pinread = analogRead(potpin); 
// turn the value from range (0 to 1023) to (0 to 255)
  pinread = (pinread)/4; 
  
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, pinread);
    delay(50); 
  
}


