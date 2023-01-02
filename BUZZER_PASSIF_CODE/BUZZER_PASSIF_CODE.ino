int buzzer = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(buzzer, 1000, 200);
  delay(1000);
    tone(buzzer, 0, 200);
   delay(1000);
    tone(buzzer, 1000, 200);
}
