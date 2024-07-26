#define ldr 8 
#define led 13
void setup() {
  Serial.begin(9600);
  pinMode(ldr,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  int value=analogRead(ldr);
  Serial.println(value);
  if(value>780){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
  delay(2000);
}
