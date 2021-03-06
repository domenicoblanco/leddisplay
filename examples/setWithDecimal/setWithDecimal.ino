#include <LEDDisplay.h>

/**
 * This example shows setting a value on to the display (optionally as Hex)
 * http://www.thecoderscorner.com/electronics/microcontrollers/driving-displays/47-arduino-7-segment-led-display-library
 */


 // the pin where wiring starts 
int startPin = 32;
int analogInPin = 1;

LEDDisplay display(startPin, true); // defaults to 4 digits.

void setup()
{
  display.setValueDec(0);
  display.startInterrupt();
}

void loop()
{
  int value = analogRead(analogInPin);
  display.setValueDec(value);
  // change the line below to render in hex instead of decimal
  //  display.setValueHex(i);
  delay(100);
}
