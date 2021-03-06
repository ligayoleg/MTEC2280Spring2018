int pinLed[] = {5, 6, 7, 8, 9, 10};
int del = 100;
/*
  pinLed[0] = 1
  pinLed[1] = 2
  ...etc...
*/
void setup() {

  //sets all LEDs to output using an array and for loop
  for (int i = 0; i < 6; i++) {
    pinMode(pinLed[i], OUTPUT);
  }

}

void loop() {
//  all off
  for(int i = 0; i < 6; i++){
    digitalWrite(pinLed[i], LOW);
    delay(del);
  }
  
  //even on
  for(int i = 0; i < 6; i++){
    if(i%2 == 0){
      digitalWrite(pinLed[i], HIGH); 
      delay(del); 
    }
  }
  
  
  for(int i = 0; i < 6; i++){
    digitalWrite(pinLed[i], LOW);
    delay(del);
  }

  //odd on
  for(int i = 0; i < 6; i++){
    if(i%2 != 0){
      digitalWrite(pinLed[i], HIGH); 
      delay(del); 
    }
  }
}
