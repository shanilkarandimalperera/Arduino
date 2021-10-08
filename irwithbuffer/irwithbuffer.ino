int IRsensor=8;
int bufferpin = 7;
int led=6;

void setup() {
 Serial.begin(9600);
 pinMode(IRsensor,INPUT);
 pinMode(bufferpin,OUTPUT);
 pinMode(led,OUTPUT);

}

void loop() {
  int statues = digitalRead(IRsensor);
  Serial.println(statues);
    if(statues == 0)
    {
      digitalWrite(bufferpin,HIGH);
      digitalWrite(led,HIGH);
    }
   else
    {
      digitalWrite(bufferpin,LOW);
      digitalWrite(led,LOW);
    }
}
