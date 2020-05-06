const int PHO = A0;
int PHO_VAL = 0;
const int LED = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(PHO, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  PHO_VAL = analogRead(PHO);
  Serial.println(PHO_VAL);
  if (PHO_VAL < 10) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);

  }
}
