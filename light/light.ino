# include <string.h>


const int DOT = 500;
const char* SOS = "... --- ...";


void setup() {
  // put your set code here, to run once:
  pinMode(7, OUTPUT);
}

void light(int ms) {
  digitalWrite(7, HIGH);
  delay(ms);
}

void off(int ms) {
  digitalWrite(7, LOW);
  delay(ms);
}

void space() {
  off(3 * DOT);
}

void slash() {
  off(DOT);
}


void dash() {
  light(3 * DOT);
}

void dot() {
  light(DOT);
}

void renderCode(char* str) {
  int len = strlen(str);
  char c;
  for(int i=0; i<len; i++) {
    c = str[i];
  
    if (c == '.') {
      dot();
      off(DOT);
    }
    else if (c == '-') {
      dash();
      off(DOT);
    }
    else if (c == ' ') {
      space();
    }
    else if (c == '/') {
      slash();
    }
  }
  off(10 * DOT);
}



void loop() {
  // put your main code here, to run repeatedly:
  renderCode(SOS);
}
