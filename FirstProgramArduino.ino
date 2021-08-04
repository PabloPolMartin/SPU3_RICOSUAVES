#include "utils.h"
  int myVar = 3;
  int secondVar = 4;
  
  int led = 4;
  int number = 1;
  
  void  BinaryLed(int aNumber){
  }

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT); //definiendo como salida para un led
  
}

void loop() {
  digitalWrite(led, HIGH );

  BinaryLed(2);



  Serial.println("Hello world");
  Serial.println(secondVar);
 
}
