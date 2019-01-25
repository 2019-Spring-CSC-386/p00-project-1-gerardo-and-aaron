const int inputPin = 2;
const int inputRed = A2;
const int inputGreen = A1;
const int inputBlue = A0;

int redState = 0;
int greenState = 0;
int blueState = 0;
int pirState = LOW;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(inputPin,INPUT);
  pinMode(inputRed,OUTPUT);
  pinMode(inputGreen,OUTPUT);
  pinMode(inputBlue,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(inputPin);
  if (val == HIGH){
    while (pirState == LOW){
      Serial.println("Motion Detected");
      for (redState; redState < 255; redState++){
        analogWrite(inputRed, redState);
      }
      redState = 0;

      for (greenState; greenState < 255; greenState++){
        analogWrite(inputGreen, greenState);
      }
      greenState = 0;

      for (blueState; blueState < 255; blueState++){
        analogWrite(inputBlue, blueState);
      }
      blueState = 0;
      
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
      
      pirState = HIGH;
    }  
  } 
  else {
    if (pirState == HIGH) {
      Serial.println("Motion Ended");
      pirState = LOW;
      
    }
  }
}
