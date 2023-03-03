void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  int time = 100;
  digitalWrite(13, HIGH);
  delay(time);
  digitalWrite(13, LOW);
  delay(time);
}