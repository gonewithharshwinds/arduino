int ledPIN = 8; 
int motionPin = 2; 
int motionStatus = 0; 

void setup() {
pinMode(ledPin, OUTPUT);
pinMode(motionPin, INPUT);
Serial.begin(9600);
}

void loop(){

motionStatus = digitalRead(motionPin);

if (motionStatus == HIGH) { 
digitalWrite(ledPIN, HIGH); 
Serial.println(“Motion detected.”); 
}
else {
digitalWrite(ledPIN, LOW); 
Serial.println(“All clear.”); 
}
}
