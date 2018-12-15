/* 
 * Alauddin Ansari
 * 2018-11-20
 * Dependencies:
 * 1. Time Lib
 * 2. DS1307RTC Lib
 */
 
#include <TimeLib.h>
#include <DS1307RTC.h>

const int LedPin = 1;

void setup() {
  pinMode(LedPin, OUTPUT);

  delay(500);
  connectDS1307();
  blinkDateTime();
  delay(3000);
}

void loop() {
  blinkTime();
  delay(5000);
}
