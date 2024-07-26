int c=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  c=c+1;
  switch(c){
    case 1:
      analogWrite(3,50);
      delay(2000);
      analogWrite(3,0);
      break;
    case 2:
      analogWrite(9,50);
      delay(2000);
      analogWrite(9,0);
      break;
    case 3:
      analogWrite(3,200);
      analogWrite(9,200);
      delay(2000);
      analogWrite(3,0);
      analogWrite(9,0);
      break;
    case 4:
      c=0;
      delay(500);
      break;
  }
}
