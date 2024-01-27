const int delays[] = {500, 400, 300, 200, 100, 50, 25};
const int blinks[] = {4, 5, 7, 10, 20, 40, 80};
const int size = sizeof(delays) / sizeof(int);

int i = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for (int j = 0; j < blinks[i]; j++)
    blink(delays[i]);
  i = ++i % size;
}

void blink(int delay_in_ms) {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(delay_in_ms);
  digitalWrite(LED_BUILTIN, LOW);
  delay(delay_in_ms);
}
