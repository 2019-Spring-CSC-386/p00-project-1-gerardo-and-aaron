int inputPin = 2;
int pirState = LOW;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(inputPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(inputPin);
  if (val == HIGH){
    if (pirState == LOW){
      Serial.println("Motion Detected");
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
