int ledPin = 13;

int ldrPin = A5;

void setup() {

Serial.begin(9600);

pinMode(ledPin, OUTPUT);

pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);

if (ldrStatus > 20) {

digitalWrite(ledPin, HIGH);

Serial.println("Its DARK");

Serial.println(ldrStatus);

} else {

digitalWrite(ledPin, LOW);

Serial.println("Its BRIGHT");

Serial.println(ldrStatus);

}
delay(1000);

}
