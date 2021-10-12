int lmotorf=2,lmotorb=4,rmotorf=7,rmotorb=8;
char input;
void setup() {
 
  pinMode(lmotorf,OUTPUT);
  pinMode(lmotorb,OUTPUT);
  pinMode(rmotorf,OUTPUT);
  pinMode(rmotorb,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.flush();
while(Serial.available())
  {
    input=Serial.read();
    if(input=='F')
    {
      digitalWrite(lmotorf,HIGH);
      digitalWrite(lmotorb,LOW);
      digitalWrite(rmotorf,HIGH);
      digitalWrite(rmotorb,LOW);
      }
      if(input=='B')
    {
      digitalWrite(lmotorf,LOW);
      digitalWrite(lmotorb,HIGH);
      digitalWrite(rmotorf,LOW);
      digitalWrite(rmotorb,HIGH);
      }
      if(input=='L')
    {
      digitalWrite(lmotorf,LOW);
      digitalWrite(lmotorb,HIGH);
      digitalWrite(rmotorf,HIGH);
      digitalWrite(rmotorb,LOW);
      }
      
    if(input=='R')
    {
      digitalWrite(lmotorf,HIGH);
      digitalWrite(lmotorb,LOW);
      digitalWrite(rmotorf,LOW);
      digitalWrite(rmotorb,HIGH);
      }
      if(input=='S')
    {
      digitalWrite(lmotorf,LOW);
      digitalWrite(lmotorb,LOW);
      digitalWrite(rmotorf,LOW);
      digitalWrite(rmotorb,LOW);
      }
}   
}
