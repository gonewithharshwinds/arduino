int ledPIN = 8; // LED output
int motionPin = 2; // PIR sensor pin
int motionStatus = 0; // Motion detected status

void setup() {
pinMode(ledPin, OUTPUT);
pinMode(motionPin, INPUT);
Serial.begin(9600);
}

void loop(){

motionStatus = digitalRead(motionPin);

if (motionStatus == HIGH) { // When motion is detected
digitalWrite(ledPIN, HIGH); // turn LED ON
Serial.println(“Motion detected.”); // Print motion detected message
}
else {
digitalWrite(ledPIN, LOW); // Turn LED OFF if no motion is detected
Serial.println(“All clear.”); // Print all clear message
}
}