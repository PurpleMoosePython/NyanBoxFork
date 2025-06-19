/* ____________________________
   This software is licensed under the MIT License:
   https://github.com/jbohack/nyanBOX
   ________________________________________ */

#include <Arduino.h>
#include "about.h"
#include "snake.h"

extern U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2;

#define KONAMI_LENGTH 10
static const uint8_t konamiSequence[KONAMI_LENGTH] = {
  BUTTON_PIN_UP,
  BUTTON_PIN_UP,
  BUTTON_PIN_DOWN,
  BUTTON_PIN_DOWN,
  BUTTON_PIN_LEFT,
  BUTTON_PIN_RIGHT,
  BUTTON_PIN_LEFT,
  BUTTON_PIN_RIGHT,
  BUTTON_PIN_LEFT,
  BUTTON_PIN_RIGHT
};

static uint8_t konamiIndex = 0;
static bool    snakeMode   = false;

void aboutSetup() {
  pinMode(BUTTON_PIN_UP,    INPUT_PULLUP);
  pinMode(BUTTON_PIN_DOWN,  INPUT_PULLUP);
  pinMode(BUTTON_PIN_LEFT,  INPUT_PULLUP);
  pinMode(BUTTON_PIN_RIGHT, INPUT_PULLUP);

  snakeSetup();
  snakeMode = false;
}

void aboutLoop() {
  const uint8_t arrows[] = {
    BUTTON_PIN_UP,
    BUTTON_PIN_DOWN,
    BUTTON_PIN_LEFT,
    BUTTON_PIN_RIGHT
  };
  for (auto pin : arrows) {
    if (digitalRead(pin) == LOW) {
      if (pin == konamiSequence[konamiIndex]) {
        konamiIndex++;
        if (konamiIndex == KONAMI_LENGTH) {
          snakeMode   = true;
          konamiIndex = 0;
        }
      } else {
        konamiIndex = (pin == konamiSequence[0]) ? 1 : 0;
      }
      delay(150);
      break;
    }
  }

  if (snakeMode) {
    snakeLoop();
    return;
  }

  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_ncenB14_tr);
  int16_t w = u8g2.getUTF8Width("nyan-BOX");
  u8g2.setCursor((128 - w) / 2, 20);
  u8g2.print("nyan-BOX");

  u8g2.setFont(u8g2_font_6x10_tf);
  const char* discord = "jbohack & zr_crackiin";
  w = u8g2.getUTF8Width(discord);
  u8g2.setCursor((128 - w) / 2, 40);
  u8g2.print(discord);

  u8g2.drawStr(7, 60, "defcon.lullaby.cafe");
  u8g2.sendBuffer();
}
