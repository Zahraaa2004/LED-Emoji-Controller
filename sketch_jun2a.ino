
#include <LedControl.h>

LedControl lc = LedControl(11, 13, 10, 1);

const int buttonPins[5] = {2, 3, 4, 5, 6};

byte emojis[5][8] = {

  {B00111100, B01000010, B10100101, B10000001, B10100101, B10011001, B01000010, B00111100}, // 😊
  {B00111100, B01000010, B10100101, B10000001, B10011001, B10100101, B01000010, B00111100}, // 😞
  {B00011000, B00001100, B11111110, B11111111, B11111111, B11111110, B00001100, B00011000}, // ➡️
  {B00000000, B01100110, B11111111, B11111111, B11111111, B01111110, B00111100, B00011000}, // 💗
  {B00011000, B00111100, B01111110, B11111111, B01111110, B00111100, B00011000, B00000000}  // ♦

};

int currentEmoji = -1; 

void setup() {

  lc.shutdown(0, false);
  lc.setIntensity(0, 8); 
  lc.clearDisplay(0);

  for (int i = 0; i < 5; i++) {

    pinMode(buttonPins[i], INPUT_PULLUP); 

  }

}

void loop() { 

  bool anyButtonPressed = false;

  for (int i = 0; i < 5; i++) {

    if (digitalRead(buttonPins[i]) == LOW) {

      if (currentEmoji != i) {

        currentEmoji = i;

        displayEmoji(currentEmoji);

      }

      anyButtonPressed = true;

      break;

    }

  }

}

void displayEmoji(int index) {

  lc.clearDisplay(0);

  for (int i = 0; i < 8; i++) { 

    lc.setRow(0, i, emojis[index][i]);

  }

}
