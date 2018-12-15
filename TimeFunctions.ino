/* 
 * Alauddin Ansari
 * 2018-12-15
 * Time and DS1307 related Functions
 * Dependencies:
 * 1. Time Lib
 * 2. DS1307RTC Lib
 * 3. BlinkLed.ino
 */

void connectDS1307() {
  
  while(timeStatus() != timeSet) {
    setSyncProvider(RTC.get);
    delay(500);

    switch(timeStatus()) {
      case timeNotSet:
        blinkLed(1);
        break;
      case timeNeedsSync:
        blinkLed(2);
        break;
      case timeSet:
        blinkLed(3);
        break;
      default:
        blinkLed(4);
        break;
    }
    delay(2000);
  }
  setSyncInterval(3600);
}

void blinkDateTime() {
  int hh, mm, dd, mmm, yy;
  
  yy = year();
  mmm = month();
  dd = day();
  hh = hour();
  mm = minute();

  blinkNumber(yy);
  delay(2000);
  blinkNumber(mmm);
  delay(2000);
  blinkNumber(dd);
  delay(2000);
  blinkNumber(hh);
  delay(2000);
  blinkNumber(mm);
  delay(2000);
}

void blinkTime() {
  int hh, mm;
  
  hh = hour();
  mm = minute();

  blinkNumber(hh);
  delay(2000);
  blinkNumber(mm);
  delay(2000);
}
