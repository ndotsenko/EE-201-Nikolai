int value = 0;

void setup() {
  pinMode(13, INPUT);
  Serial.begin(9600);
}

void loop() {
  value = digitalRead(13);

  if (value == 0) {
    Serial.println("It's 2023");
  } else {
    Serial.println("Hello World!");
  }
  delay(100);
}
