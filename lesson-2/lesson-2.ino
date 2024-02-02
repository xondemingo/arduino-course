const int BLINK_ORDER_PINS[] = {2, 4, 5, 3};
const int NUMBER_OF_PINS = sizeof(BLINK_ORDER_PINS) / sizeof(BLINK_ORDER_PINS[0]); 

const int DELAY_BETWEEN_BLINKS = 100;

void setup() {
  for(int i = 0; i < NUMBER_OF_PINS; i++)
    pinMode(BLINK_ORDER_PINS[i], OUTPUT);
}

void loop() {
  for(int i = 0; i < NUMBER_OF_PINS; i++)
    blink(BLINK_ORDER_PINS[i]);
}

void blink(int led_pin) {
  digitalWrite(led_pin, HIGH);
  delay(DELAY_BETWEEN_BLINKS);
  digitalWrite(led_pin, LOW);
}