int aktuelle_pause = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == LOW) {
    aktuelle_pause = 200;
  } else if (digitalRead(4) == LOW) {
    aktuelle_pause = 400;
  } else if (digitalRead(6) == LOW) {
    aktuelle_pause = 600;
  }
  
  digitalWrite(13, HIGH);
  delay(aktuelle_pause);
  digitalWrite(13, LOW);
  delay(aktuelle_pause);
}
