void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val=analogRead(A0);
  Serial.println(val);
  if(val<30)
    analogWrite(6,50);
  else
    analogWrite(6,200);
  delay(1000);
}
