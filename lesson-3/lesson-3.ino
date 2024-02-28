const int PINS[] = {7, 6, 3, 2};
const int NUMBER_OF_PINS = sizeof(PINS)/sizeof(PINS[0]);
const int TIME_UNIT = 150;

bool turning_on = true;

void setup() {
  for(int i = 0; i < NUMBER_OF_PINS; i++)
    pinMode(PINS[i], OUTPUT);
}

void loop() {
  for(int i = 0; i < NUMBER_OF_PINS; i++) {
    digitalWrite(PINS[i], turning_on ? HIGH : LOW);
    delay(TIME_UNIT);
  }
  turning_on = !turning_on;
}
