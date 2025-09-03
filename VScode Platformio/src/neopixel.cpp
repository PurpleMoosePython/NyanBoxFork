/* ____________________________
   This software is licensed under the MIT License:
   https://github.com/jbohack/nyanBOX
   ________________________________________ */
   
#include "../include/neopixel.h"
#include "../include/setting.h"
#include <EEPROM.h>
#include "../include/pindefs.h"

extern Adafruit_NeoPixel pixels;

void neopixelSetup() {
  EEPROM.begin(512); 
  neoPixelActive = EEPROM.read(0);
  
 if (neoPixelActive) {
  pixels.begin();
  pixels.clear();
  pixels.show();
  }
}

static bool isPulsing = false;
static uint8_t baseRed = 0;
static uint8_t baseGreen = 0;
static uint8_t baseBlue = 0;
static unsigned long lastPulseTime = 0;
static int pulseDirection = 1;
static int brightness = 0;
const int pulseSpeed = 35;

void pulseColor(uint8_t r, uint8_t g, uint8_t b) {
  if (!neoPixelActive) return;
  
  isPulsing = true;
  baseRed = r;
  baseGreen = g;
  baseBlue = b;
  brightness = 0;
  pulseDirection = 1;
}

void stopPulsing() {
  isPulsing = false;
  if (neoPixelActive) {
    pixels.setPixelColor(0, 0, 0, 0);
    pixels.show();
  }
}

void neopixelLoop() {
  if (!neoPixelActive || !isPulsing) return;
  
  unsigned long now = millis();
  if (now - lastPulseTime >= pulseSpeed) {
    lastPulseTime = now;
    
    brightness += pulseDirection * 2;
    
    if (brightness >= 100) {
      brightness = 100;
      pulseDirection = -1;
    } else if (brightness <= 0) {
      brightness = 0;
      pulseDirection = 1;
    }
    
    uint8_t r = (baseRed * brightness) / 100;
    uint8_t g = (baseGreen * brightness) / 100;
    uint8_t b = (baseBlue * brightness) / 100;
    
    pixels.setPixelColor(0, pixels.Color(r, g, b));
    pixels.show();
  }
}