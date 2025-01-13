#include <Arduino.h>

// Function declarations
int myFunction(int, int);

void setup() {
  // Initialize the LED pin as output
  pinMode(LED_BUILTIN, OUTPUT); // !!!!!!!Make sure to set the pin mode!!!!!!!

  // Example function call (optional for your LED logic)
  int result = myFunction(2, 3);

  // Initialize Serial Monitor for debugging
  Serial.begin(9600);
  Serial.println("Setup completed");
}

void loop() {
  int x = 0;
  while (x < 500)
  {
    //Blink the LED with the specified pattern
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100); // LED on for 100ms
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);  // LED off for 10ms

    // Debugging message (optional)
    Serial.println("LED is blinking " + String(x));

    x++;
  }
  ESP.deepSleep(0); // This will put the ESP32 into deep sleep mode
}

// Function definitions
int myFunction(int x, int y) {
  return x + y;
}