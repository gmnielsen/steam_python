
// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      24

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 1; // delay for half a second

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code

  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {

  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.
  delay(1000);
  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,50,0));
    pixels.show();
  }

  delay(1000);
  for(int i=0;i<NUMPIXELS;i++){

    pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    pixels.show();
  }
   /* pixels.setPixelColor(2, pixels.Color(0,150,0));
    pixels.setPixelColor(3, pixels.Color(0,150,0));
    pixels.setPixelColor(4, pixels.Color(0,150,0));
    pixels.setPixelColor(5, pixels.Color(0,150,0));
    pixels.setPixelColor(6, pixels.Color(0,150,0));
    pixels.setPixelColor(7, pixels.Color(0,150,0));
    pixels.setPixelColor(8, pixels.Color(0,150,0));
    pixels.setPixelColor(9, pixels.Color(0,150,0));
    pixels.setPixelColor(10, pixels.Color(0,150,0));
    pixels.setPixelColor(11, pixels.Color(0,150,0));
    pixels.setPixelColor(12, pixels.Color(0,150,0));
    pixels.setPixelColor(13, pixels.Color(0,150,0));
    pixels.setPixelColor(14, pixels.Color(0,150,0));
    pixels.setPixelColor(15, pixels.Color(0,150,0));
    pixels.setPixelColor(16, pixels.Color(0,150,0));
    pixels.setPixelColor(17, pixels.Color(0,150,0));
    pixels.setPixelColor(18, pixels.Color(0,150,0));
    pixels.setPixelColor(19, pixels.Color(0,150,0));
    pixels.setPixelColor(20, pixels.Color(0,150,0));
    pixels.setPixelColor(21, pixels.Color(0,150,0));
    pixels.setPixelColor(22, pixels.Color(0,150,0));
    pixels.setPixelColor(23, pixels.Color(0,150,0));
    pixels.setPixelColor(24, pixels.Color(0,150,0));
// Moderately bright green color.
*/
  
  
}

