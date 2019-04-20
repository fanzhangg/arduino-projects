#include <snippets.h>

const int buttonPin = 8;
const int ledPin = 7;
int lastButtonState = 0;
int buttonState = 0;

void setupSwitch() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void switch() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
       // if the current state is HIGH then the button went from off to on:
      digitalWrite(7, HIGH);
    }
    else {
      digitalWrite(7, LOW);    
    }
    delay(100);
  }
  lastButtonState = buttonState;

}
