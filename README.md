## The simplest button debounce utility for Arduino

This library is probably the simplest button debounce ulitity for Arduino. The code is based on [Jack Ganssle](http://www.ganssle.com/bio.htm)'s debounce function that he described in his part 2 of ["A Guide to Debouncing"](http://www.ganssle.com/debouncing.htm) article.

### Example

```
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
```

Refer to my [blog](https://www.e-tinkers.com/2021/05/the-simplest-button-debounce-solution/) post on the explanation on how the debounce function actually work.

