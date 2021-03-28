
void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(6,HIGH);
  delay(500);
  digitalWrite(7,HIGH);
  delay(250);

  digitalWrite(6,LOW);
  delay(500);
  digitalWrite(7,LOW);
  delay(250);

}
