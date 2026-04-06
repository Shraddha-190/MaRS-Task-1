int red = 11;
int blue = 10;
int green = 9;

int ledPin = 5;
int potPin = A0;

unsigned long previous = 0;
int ledState = LOW;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  int potValue = analogRead(potPin);

  int brightness = map(potValue, 0, 1023, 0, 255);

  int interval = map(potValue, 0, 1023, 100, 1000);

  analogWrite(red, brightness);           // increases
  analogWrite(green, 255 - brightness);   // decreases
  analogWrite(blue, brightness / 2);      // moderate change

  unsigned long current = millis();

  if (current - previous >= interval) {
    previous = current;
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
  }
}
