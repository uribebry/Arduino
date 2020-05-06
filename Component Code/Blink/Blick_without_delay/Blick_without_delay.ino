const int LED = 11;


long currentMillis = 0;
long previousMillis = 0;
const long interval = 1000;
int ledState = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);

}

void loop() {
  //Code for flashing light
  currentMillis  = millis();
  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;
    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(LED, ledState);
  }
  //Code fir button
}
