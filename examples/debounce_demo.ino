#include "button.h"

Button btn1;
Button btn2;

void setup() {
  btn1.begin(2);
  btn2.begin(3);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // press button 1 to turn on the LED
  if (btn1.debounce()) {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  // press button 2 to turn off the LED
  if (btn2.debounce()) {
    digitalWrite(LED_BUILTIN, LOW);
  }
}
