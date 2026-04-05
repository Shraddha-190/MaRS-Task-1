const int ledPin = 13;
const int buttonPin = 2;

unsigned long ledOnTime = 0;
unsigned long reactionTime = 0;

bool ledState = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  Serial.begin(9600);

  randomSeed(analogRead(0));
}

void loop() {
  int waitTime = random(2000, 5000);
  delay(waitTime);

  digitalWrite(ledPin, HIGH);
  ledOnTime = millis();
  ledState = true;

  while (ledState) {
    if (digitalRead(buttonPin) == LOW) { // button pressed
      reactionTime = millis() - ledOnTime;

      Serial.print("Your Reaction Time: ");
      Serial.print(reactionTime);
      Serial.println(" ms");

      digitalWrite(ledPin, LOW);
      ledState = false;

      delay(2000); // small pause before next round
    }
  }
}
