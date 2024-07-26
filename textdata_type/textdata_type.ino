void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  String ch[]={"Hello","hey"};

  for(int i=0;i<2;i++)
    Serial.print(ch[i]);
}

void loop() {
  // put your main code here, to run repeatedly:

}
