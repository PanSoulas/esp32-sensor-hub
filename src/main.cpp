#include <Arduino.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello!");
  Serial.println(ESP.getFlashChipSize());
  Serial.println(ESP.getPsramSize());
}

void loop(){ 
}
