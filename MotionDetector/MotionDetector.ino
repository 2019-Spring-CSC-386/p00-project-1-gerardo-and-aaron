//the inputs
const int inputPin = 2;
const int inputRed = A2;
const int inputGreen = A1;
const int inputBlue = A0;


//start values for the time the colors stay up.
int redState = 200;
int greenState = 200;
int blueState = 200;
int pirState = LOW;
int val = 0;



//sets up which pins we use on the arduino board.
void setup() {
  // put your setup code here, to run once:
  pinMode(inputPin,INPUT);
  pinMode(inputRed,OUTPUT);
  pinMode(inputGreen,OUTPUT);
  pinMode(inputBlue,OUTPUT);
  Serial.begin(9600);
}


// high-tech-AI-recursive-heat-sensing-detection-machine-learning code.
void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(inputPin);
  Serial.println(val);
  //int timer = 5000;
  if (val == HIGH){
    analogWrite(inputRed, 130);
    //analogWrite(inputGreen, greenState);
    //analogWrite(inputBlue, 255);
    delay(1000);
    analogWrite(inputRed, 0);
    /*
    analogWrite(inputRed, 0);
    //pirState = LOW;

    analogWrite(inputGreen, greenState);
    delay(1000);
    //pirState = LOW;
    */
    analogWrite(inputBlue, blueState);
    delay(1000);
    
      }

  else if (val == LOW){
    analogWrite(inputRed,0);
    analogWrite(inputGreen,0);
    analogWrite(inputBlue,0);
  }
    /*
   
    Serial.println("Motion Detected");

    //turns on red when motion is detected
    for (redState; redState < 255; redState++){
      analogWrite(inputRed, redState);
      //analogWrite(inputBlue, blueState);
      //Serial.println(redState);
      delay(100);
     
    }
    pirState = HIGH;
    Serial.println("Done Red");
    redState = 125;
    
    //pirState = LOW;
    //turns on green when motion is detected
    for (greenState; greenState < 255; greenState++){
      analogWrite(inputGreen, greenState);
      //Serial.println(greenState);
      delay(100);
      //pirState = HIGH;
    }
    Serial.println("Done Green");
    greenState = 125;
    //pirState = LOW;
    //turns on blue when motion is detected
    for (blueState; blueState < 255; blueState++){
      analogWrite(inputBlue, blueState);
      //Serial.println(blueState);
      delay(100);
      //pirState = HIGH;
    }
    Serial.println("Done Blue");
    blueState = 123;
    //pirState = LOW;
    
    /*
    if (redState == LOW){
      redState = HIGH;
    }
    
    delay(200);
    
    if (greenState == LOW){
      greenState = HIGH;
    }
    analogWrite(inputGreen, greenState);
    delay(200);
    */
    
   //pirState = HIGH;
  
  
//}
/*
//turns off light.
  else {
    if (pirState == HIGH) {
      Serial.println("Motion Ended");
      pirState = LOW;
      //val = LOW;
      
    }
    
  }
*/
}
  
   
