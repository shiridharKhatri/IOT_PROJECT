// Define the pins for the ultrasonic sensor
// const int trigPin = 9;
// const int echoPin = 10;
const int pin = 9;

// Variable to store the calculated distance
// long duration;
// int distance;

void setup() {
  // Start the serial communication
  // Serial.begin(9600);
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  // Set the ultrasonic sensor pins as output (TRIG) and input (ECHO)
  // pinMode(trigPin, OUTPUT);
  // pinMode(echoPin, INPUT);
}

void loop() {
  // Clear the TRIG pin by setting it LOW
  // digitalWrite(trigPin, LOW);
  // delayMicroseconds(2);

  // Trigger the ultrasonic pulse by setting the TRIG pin HIGH for 10 microseconds
  // digitalWrite(trigPin, HIGH);
  // delayMicroseconds(10);
  // digitalWrite(trigPin, LOW);

  // Read the pulse duration from the ECHO pin
  // duration = pulseIn(echoPin, HIGH);

  // Calculate the distance (duration in microseconds / 2) / 29.1 gives distance in cm
  // distance = duration / 2 / 29.1;

  // Print the distance if it changes (to avoid excessive output)
  // static int prevDistance = 0;
  // if (distance != prevDistance) {
  //   Serial.println(distance);
  //   prevDistance = distance;
  // }

  // Delay between readings
  // delay(100);
}
