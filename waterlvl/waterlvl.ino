const int pumpPin = 9; // Pin connected to the water pump

void setup() {
  pinMode(pumpPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Turn on the water pump
  digitalWrite(pumpPin, HIGH);
  Serial.println("Pump is ON");
  
  // Run the pump for 5 seconds (adjust the duration as needed)
  delay(2000); // 5 seconds

  // Turn off the water pump
  digitalWrite(pumpPin, LOW);
  Serial.println("Pump is OFF");
  delay(1000);
  // Wait for 10 seconds before running the pump again (adjust the delay as needed)
  // delay(10000); // 10 seconds
}
