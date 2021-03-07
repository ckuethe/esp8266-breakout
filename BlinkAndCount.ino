//simple test sketch to both blink the LED and generate UART output
#define DELAY 250

void setup() {
  // ESP12 seems to use pin 2, select it from the Tools > Builtin LED menu item
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  static int b = 0;

  Serial.printf("blinkyprint %d\n", b++);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(DELAY);

  Serial.printf("blinkyprint %d\n", b++);
  digitalWrite(LED_BUILTIN, LOW);
  delay(DELAY);
}
