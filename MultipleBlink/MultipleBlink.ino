/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald

  modified 2 Sep 2016
  by Arturo Guadalupi

  modified 8 Sep 2016
  by Colby Newman
*/


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  for(int i = 3; i < 13; i++) pinMode(i, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(int i = 3; i < 13; i++) {
    digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(200);                       // wait for a second
    digitalWrite(i, LOW);    // turn the LED off by making the voltage LOW
    delay(200);
  }

    for(int i = 3; i < 13; i++) digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(2000);                       // wait for a second
    for(int i = 3; i < 13; i++) digitalWrite(i, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);


  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    for (int i = 3; i < 13; i++) if (i == 3 || i == 5 || i == 6 || i == 9 || i == 10 || i == 11) analogWrite(i, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(60);
   }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    for (int i = 3; i < 13; i++) if (i == 3 || i == 5 || i == 6 || i == 9 || i == 10 || i == 11) analogWrite(i, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(60);
  }

    for(int i = 3; i < 13; i++) {
      digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(400);                       // wait for a second
    }
    for(int i = 3; i < 13; i++) {
      digitalWrite(i, LOW);    // turn the LED off by making the voltage LOW
      delay(400);
    }

}
