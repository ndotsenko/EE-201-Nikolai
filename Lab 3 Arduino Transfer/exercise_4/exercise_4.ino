#include "SevSeg.h"
SevSeg sevseg; 

void setup(){
  byte numDigits = 1;
  byte digitPins[] = {10, 11, 12, 13};
  byte segmentPins[] = {9, 2, 3, 5, 6, 8, 7, 4};

  bool resistorsOnSegments = true; 
  bool updateWithDelaysIn = true;
  byte hardwareConfig = COMMON_CATHODE; 
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(50);
}

void loop(){
  for (int i = 9; i >= 0; i--) {
    sevseg.setNumber(i, 1);
    delay(1500);
    sevseg.refreshDisplay();
  }
}