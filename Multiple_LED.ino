void setup() {
  DDRD = 0b11111111;

  for (int i = 0; i < 8; i++)
  pinMode(i, OUTPUT);
}
uint8_t pattern[8] = {0b11000011, 0b10000001, 0b11100111, 0b11111111};
void loop () {
  for (int i = 0; i < 4; i ++)
  {
  PORTD = pattern[i];
  delay(1000);
  }
}
