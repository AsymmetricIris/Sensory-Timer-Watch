#include <Adafruit_NeoPixel.h>

// Code based on:
// https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-use

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1:
#define LED_PIN    6

// How many NeoPixels are attached to the Arduino?
#define LED_COUNT 60

// Declare our NeoPixel strip object:
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
// Argument 1 = Number of pixels in NeoPixel strip
// Argument 2 = Arduino pin number (most are valid)
// Argument 3 = Pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  
  int n = 4;
  int red = 30;
  int green = 30;
  int blue = 30;

  strip.setPixelColor(n, red, green, blue);

  n = 11;
  uint32_t magenta = strip.Color(255, 0, 255);
  strip.setPixelColor(n, magenta);

  n = 21;
  uint32_t greenishWhite = strip.Color(0, 64,  0, 64);
  strip.setPixelColor(n, greenishWhite);

  strip.show(); //colour changes do not take effect until we call show() 
}

void loop() {
  // TODO - fill the strip with a colour depending on whether we're in the beginning, middle or end
  //        of our timespan
  // strip.fill(color, first, count);

}
