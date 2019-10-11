// #include <Arduino.h>
#include <M5Stack.h>

// run once
void setup() {
  // init
  M5.begin();
  // access LCD
  M5.Lcd.print("hello M5Stack | ESP32");
}

// run repeatedly
void loop() {
  M5.update();
}