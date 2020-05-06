const int LED = 11;
const int BUT = 13;

int BUT_VAL = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(BUT, INPUT);
  Serial.begin(9600);

}

void loop() {
  millis();
    Serial.println(millis());

  // put your main code here, to run repeatedly:
  BUT_VAL = digitalRead(BUT);
  digitalWrite(LED, BUT_VAL);
  Serial.println(BUT_VAL);
}
