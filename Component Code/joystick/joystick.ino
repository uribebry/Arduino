// Arduino pin numbers
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = 0; // analog pin connected to X output
const int Y_pin = 1; // analog pin connected to Y output

void setup() {
  pinMode(SW_pin, INPUT);
  pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);

  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
}

void loop() {
  Serial.print("Switch:  ");
  //Serial.print(digitalRead(SW_pin));
  Serial.print("\n");
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  Serial.print("Y-axis: ");
  //Serial.println(analogRead(Y_pin));
  Serial.print("\n\n");

  if(analogRead(X_pin) >= 490){
    digitalWrite(5,HIGH);
}else {
  digitalWrite(5,LOW);
}  
if(analogRead(X_pin) < 440){
    digitalWrite(6,HIGH);
}else {
  digitalWrite(6,LOW);
}  

}
