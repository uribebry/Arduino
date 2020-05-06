const int BUT = 13;
int BUT_VAL = 0;

const int LIG = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(BUT, INPUT);
  pinMode(LIG, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  BUT_VAL = digitalRead(BUT);
  Serial.println(BUT_VAL);

if(BUT_VAL == HIGH) {
  digitalWrite(LIG, HIGH);
} else {
  digitalWrite(LIG,LOW);
}
  
}
