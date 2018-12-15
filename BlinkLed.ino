/* 
 * Alauddin Ansari
 * 2018-11-20
 * Functions:
 * Blink LED
 * Blink Number on LED
 * Dependencies:
 * 1. Pin variable: int LedPin
 */

void blinkNumber(int num) {
  if (num > 0) {
    while(num > 0) //do till num greater than  0
    {
        int mod = num % 10;  //split last digit from number
        
        blinkLed(mod); //print the digit. 
    
        num = num / 10;    //divide num by 10. num /= 10 also a valid one 
        
        delay(1000);
    }
  } else {
    blinkLed(0);
  }
}

void blinkLed(int times)
{
  if (times > 0) {
    for (int i = 0; i < times; i++) {
      digitalWrite(LedPin, HIGH);
      delay(300);
      digitalWrite(LedPin, LOW);
      delay(500);
    }
  } else {
    digitalWrite(LedPin, HIGH);
    delay(100);
    digitalWrite(LedPin, LOW);
    delay(500);
  }
}
