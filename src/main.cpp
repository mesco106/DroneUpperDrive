#include "Arduino.h"

#define BAUD_RATE 115200
#define EINT0 3
#define EINT1 2



void readingReciever(int& PWM1, int& PWM2){
  PWM1 = pulseIn(EINT0, HIGH);
  PWM2 = pulseIn(EINT1, HIGH);
}

void setup()
{
  int fowardPeriod;
  int turnPeriod;

  pinMode(EINT0, INPUT);
  pinMode(EINT1, INPUT);
  //attachInterrupt(digitalPinToInterrupt(EINT0), readPWM0, RISING);
  //attachInterrupt(digitalPinToInterrupt(EINT1), readPWM1, RISING);	    
  Serial.begin(BAUD_RATE);

  while(1){
    readingReciever(fowardPeriod, turnPeriod);
    // Serial.print("Channel 7: ");
    // Serial.print(fowardPeriod);
    // Serial.print(" | Channel 8: ");
    // Serial.println(turnPeriod);
  }
}




