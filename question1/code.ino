// LED pins
int led1 = 2;
int led2 = 3;
int led3 = 4;

// Time intervals
unsigned long interval1 = 500;
unsigned long interval2 = 1000;
unsigned long interval3 = 1500;

// Store last time each LED changed
unsigned long previous1 = 0;
unsigned long previous2 = 0;
unsigned long previous3 = 0;

// LED states
bool state1 = LOW;
bool state2 = LOW;
bool state3 = LOW;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  unsigned long current = millis();

  // LED 1
  if (current - previous1 >= interval1) {
    previous1 = current;
    state1 = !state1;
    digitalWrite(led1, state1);
  }

  // LED 2
  if (current - previous2 >= interval2) {
    previous2 = current;
    state2 = !state2;
    digitalWrite(led2, state2);
  }

  // LED 3
  if (current - previous3 >= interval3) {
    previous3 = current;
    state3 = !state3;
    digitalWrite(led3, state3);
  }
}
