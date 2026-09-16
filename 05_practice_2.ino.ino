// Define Pin 7 for the LED
const int LED_PIN = 7;

void setup() {
  // Set Pin 7 as an OUTPUT
  pinMode(LED_PIN, OUTPUT);
  
  // Set initial state to HIGH (OFF in Active-Low configuration)
  digitalWrite(LED_PIN, HIGH);
}

void loop() {
  // 1. First 1 second: Turn ON the LED
  // (In Active-Low circuit: LOW = ON)
  digitalWrite(LED_PIN, LOW);
  delay(1000);

  // 2. Next 1 second: Blink the LED 5 times
  // (5 cycles total = 1000ms / 5 = 200ms per cycle -> 100ms OFF, 100ms ON)
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_PIN, HIGH); // OFF
    delay(100);
    digitalWrite(LED_PIN, LOW);  // ON
    delay(100);
  }

  // 3. Turn OFF the LED and enter an infinite loop
  digitalWrite(LED_PIN, HIGH); // OFF
  
  while (1) {
    // Infinite loop stops execution so loop() does not repeat
  }
}
