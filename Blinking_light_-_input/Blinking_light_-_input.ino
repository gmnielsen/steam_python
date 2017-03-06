#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      24

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

// declaring varibles
int input;
//this variable just changes what is written back to the serial, keep it zero
int r = 0;

int d = 250; // in seconds

void setup() {

#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code

  pixels.begin();
//setting up the pins you're using
//setting up the serial monitor
Serial.begin(9600);

}


void loop() {
  //seeing if theres data available in the serial
  if (Serial.available() > 0) {
  //reads whats in the serial and sets it equal to the int input
  input = Serial.read();
  Serial.print(input);
  //prints what it is so you can know what different letters equal
  } 
  else {
  // tests to see if it equals a, if it does it executes whats under it, 
  // if it does not equal 97 it goes to the else  
  } if ( input == 97){
    //turns the digital output to on
    for( int x=0; x<3; x++){
      for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,50,0));
    pixels.show();
    
  }
    //delays .5 seconds
    delay(d);
    //turns off the digital output
   for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    pixels.show();
  }
  delay(d);
  }
  }
  else {
  }
  
  //writes 0 in the serial
  Serial.write(r);
}
