int gasSensor = A0;
int ledPin = 7;
int buzzer = 8;

int threshold = 400;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gasValue = analogRead(gasSensor);

  Serial.println(gasValue);

  if (gasValue > threshold) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(500);
}

