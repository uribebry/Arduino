const int button = 13;
const int LED = 11;
const int BUZZ = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(LED,OUTPUT);
  pinMode(BUZZ,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int BUT_VAL = digitalRead(button);
  digitalWrite(LED,BUT_VAL);
 Serial.println(BUT_VAL);
  if(BUT_VAL == 1){
    tone(BUZZ,800);
  } else 
    noTone(BUZZ);
  
}
