#include <NewPing.h>

// Define the trigger and echo pins for the HC-SR04 sensor
const int triggerPin = 2;  // Connect the trigger pin of the HC-SR04 to digital pin 2
const int echoPin = 3;     // Connect the echo pin of the HC-SR04 to digital pin 3
const int led=8;

// Define a threshold distance to determine if the parking space is available
const int thresholdDistance = 20; // Adjust this value as needed (in centimeters)

// Create an instance of the NewPing library
NewPing sonar(triggerPin, echoPin);

void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging
}

void loop() {
  // Measure the distance using the ultrasonic sensor (in centimeters)
  unsigned int distance = sonar.ping_cm();

  if (distance <= thresholdDistance) {
    // Parking space is occupied, indicate that it's unavailable
    Serial.println("Parking space occupied. Please wait.");
    digitalWrite(led,LOW);
  } else {
    // Parking space is available, indicate that it's free
    Serial.println("Parking space available. You can park.");
    digitalWrite(led,HIGH);
  }

  delay(1000); // Delay for 1 second between distance measurements
}
