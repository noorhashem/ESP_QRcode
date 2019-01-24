 
# ESP8266 QRcode

Just copy the ESP8266 QRcode folder to your Arduino 'libraries' folder. I have included an example sketch.

The code is based on qrdquino by tz1 : https://github.com/tz1/qrduino

## Install dependency for ESP8266 QRcode
Open Library Manager (menu Sketch > Include Library > Manage Libraries…) then install the following libraries
- Adafruit_SSD1325_Library by Adafruit : https://github.com/adafruit/Adafruit_SSD1325_Library

## Run examples from ESP8266 QRcode
- Open Arduino IDE, try examples of ESP8266 QRcode library

## Notes
- Although this library was built to be used with ESP8266 it works perfectly with ESP32
- You can manipulate the position of the qrcode through offsetsX & offsetsY variables in qrcode.cpp file.
- Don't forget also to change the dimensions of yhe used screen in screenwidth & screenheight in qrcode.cpp file.
- Default screen orientation is HORIZONTAL. You can change the orientation in line 20 in qrcode.cpp file.
for more about rotating the display, visit https://learn.adafruit.com/adafruit-gfx-graphics-library/rotating-the-display

## Tested Displays
- 2.7" monochrome 128x64 oled display module by Adafruit
https://learn.adafruit.com/2-7-monochrome-128x64-oled-display-module/overview


## Display example
![qrcode](src/img/qrcode.JPG?raw=true)
