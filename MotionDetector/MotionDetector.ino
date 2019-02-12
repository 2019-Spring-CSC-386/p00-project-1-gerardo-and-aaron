#include <time.h>
#include <Wire.h>
#include "RTClib.h"


//the inputs
const int inputPin = 2;
const int inputRed = 5;
const int inputGreen = 6;
const int inputBlue = 3;

//start values for the time the colors stay up.
int redState = 200;
int greenState = 200;
int blueState = 130;
int pirState = LOW;
int val = 0;

typedef void (*f)(); 

RTC_DS1307 RTC;

//sets up which pins we use on the arduino board.
void setup() {
  // put your setup code here, to run once:
  pinMode(inputPin,INPUT);
  pinMode(inputRed,OUTPUT);
  pinMode(inputGreen,OUTPUT);
  pinMode(inputBlue,OUTPUT);
  Wire.begin();
  RTC.begin();
  //RTC.adjust(DateTime(2014, 1, 21, 3, 0, 0));
  //RTC.set(now());
  Serial.begin(9600);


}
//all of the below make that particular color with our LED. 
void make_Darkblue(){
  analogWrite(inputRed, 0);
  analogWrite(inputGreen, 6);
  analogWrite(inputBlue, 185);
}

void make_Violet(){
  analogWrite(inputRed, 162);
  analogWrite(inputGreen, 2);
  analogWrite(inputBlue, 151);
}

void make_Pink(){
  analogWrite(inputRed, 255);
  analogWrite(inputGreen, 71);
  analogWrite(inputBlue, 244);
}

void make_Orange(){
  analogWrite(inputRed, 255);
  analogWrite(inputGreen, 50);
  analogWrite(inputBlue, 0);
}

void make_Yellow(){
  analogWrite(inputRed, 255);
  analogWrite(inputGreen, 120);
  analogWrite(inputBlue, 10);
}

void make_Cyan(){
  analogWrite(inputRed, 180);
  analogWrite(inputGreen, 180);
  analogWrite(inputBlue, 255);
}

void make_Blue(){
  analogWrite(inputRed, 110);
  analogWrite(inputGreen, 139);
  analogWrite(inputBlue, 255);  
}

void change_color(){
//  f colors[] = {&make_Darkblue, &make_Violet, &make_Pink, &make_Orange, &make_Yellow, &make_Cyan, &make_Blue};
//  for (int color=0; color<7; color++){
//    if (digitalRead(inputPin)==HIGH){
//      colors[color];
//    }
//    else{
//      analogWrite(inputRed, 0);
//      analogWrite(inputGreen, 0);
//      analogWrite(inputBlue, 0); 
//    }
//  }

    make_Darkblue();
    delay(3000);
    make_Violet();
    delay(3000);
    make_Pink();
    delay(3000);
    make_Orange();
    delay(3000);
    make_Yellow();
    delay(3000);
    make_Cyan();
    delay(3000);
    make_Blue();
    delay(3000);
  }

// high-tech-AI-recursive-heat-sensing-detection-machine-learning code.(its the loop.)
void loop() {
    DateTime now = RTC.now();
    //setTime(now.unixtime());
    //Serial.println(now.hour());
    Serial.println();
  /*
  time_t t = processSyncMessage();
    if (t != 0) {
      RTC.set(t);   // set the RTC and the system time to the received value
      setTime(t);
 */
  // put your main code here, to run repeatedly:
  val = digitalRead(inputPin);
  Serial.println(val);
  //int timer = 5000;
  if (val == HIGH){
    change_color();
    }
     else{
        analogWrite(inputRed, 0);
        analogWrite(inputGreen, 0);
        analogWrite(inputBlue, 0);    
     } 
   

//  else if (val == LOW){
//    analogWrite(inputRed,0);
//    analogWrite(inputGreen,0);
//    analogWrite(inputBlue,0);
    
//  }
    

}
