String voice;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  while (Serial.available())
  {
    delay(10);
    char c = Serial.read();
    voice += c;
  }
  if (voice.length() > 0)
  {
    Serial.println(voice);
    if (voice == "on1")
    {
      digitalWrite(13, HIGH);
    }
    if (voice == "on2")
    {
      digitalWrite(12, HIGH);
    }
    if (voice == "on22")
    {
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
    }
    if (voice == "off")
    {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
    }
    voice = "";
  }
}

