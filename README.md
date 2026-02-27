
# EmojiMatrixDisplay

Interactive Arduino project: press buttons to light up fun emojis on an 8x8 LED matrix!  

## Features
- Display 5 different emojis: 😊 (smile), 😞 (sad), ➡️ (arrow), 💗 (heart), ♦ (diamond)  
- Switch emojis using 5 individual buttons  
- Easy-to-use LedControl library for LED matrix control  
- Perfect for beginners learning Arduino, buttons, and LED displays  

## Hardware Required
- Arduino board (e.g., Uno, Mega)  
- 8x8 LED Matrix  
- MAX7219 LED driver (handled by LedControl library)  
- 5 push buttons  
- Jumper wires  
- Breadboard  

## Circuit Diagram
- **LED Matrix pins** connected to MAX7219:  
  - DIN → pin 11  
  - CS  → pin 10  
  - CLK → pin 13  
- **Buttons** connected to pins 2–6 with `INPUT_PULLUP` configuration

  <p align="center">
  <img src="Screenshot 2026-02-27 195440.png" width="45%" />
</p>

## Installation
1. Install the [LedControl library](https://github.com/wayoda/LedControl) in Arduino IDE.  
2. Connect your hardware according to the pin configuration above.  
3. Upload `EmojiMatrixDisplay.ino` to your Arduino board.  
4. Press the buttons to switch between emojis!  

## Code Overview
- `emojis` array stores the 8x8 bitmap for each emoji  
- `buttonPins` array stores the pins for the 5 buttons  
- `displayEmoji(index)` function lights up the selected emoji on the LED matrix  
