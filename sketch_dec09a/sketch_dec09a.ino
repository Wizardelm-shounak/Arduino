#include <SoftwareSerial.h>
#include <Servo.h>

// HC-05 default baud rate
#define HC05_BAUDRATE 9600

// Software serial pins
#define HC05_RX 2
#define HC05_TX 3

// Servo motor pin
#define SERVO_PIN 9

// HC-05 serial port
SoftwareSerial HC05(HC05_RX, HC05_TX);

// Servo motor
Servo servo;

void setup() {
  // Initialize serial port for debugging
  Serial.begin(9600);

  // Initialize HC-05 serial port
  HC05.begin(HC05_BAUDRATE);

  // Attach servo to pin
  servo.attach(SERVO_PIN);
}

void loop() {
  // Check if there are any incoming messages from the HC-05
  if (HC05.available()) {
    // Read the incoming message
    String message = HC05.readString();

    // Debugging output
    Serial.print("Received: ");
    Serial.println(message);

    // Parse the message to extract the servo angle
    int angle = message.toInt();

    // Set the servo to the specified angle
    servo.write(angle);
  }
}
 
