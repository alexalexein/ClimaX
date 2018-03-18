#include <IRLibAll.h>
 
IRsend mySender;

bool isButtonPressed = false;

const int BUTTON = 8;
 
void setup() {
  Serial.begin(9600);
  pinMode(BUTTON, INPUT_PULLUP);
}
 
void loop() {
  delay(100);
  if(!digitalRead(BUTTON) && !isButtonPressed){
    isButtonPressed = true;
    Serial.println("Pressed");
    mySender.send(NECX, 0xE0E040BF, 32);
  }
  else if (digitalRead(BUTTON) && isButtonPressed){
    isButtonPressed = false;
    Serial.println("Released");
  }
}
