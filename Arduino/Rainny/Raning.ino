const int rainPin = A0;
const int motorPin = 9;

  int thresholdValue = 200;
void setup() {
  // put your setup code here, to run once:
  pinMode(rainPin, INPUT);
  pinMode(motorPin, OUTPUT);
  digitalWrite(motorPin, LOW);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(rainPin);
  Serial.print(sensorValue);
  if(sensorValue < thresholdValue){
    Serial.println(" - Raining !");
    digitalWrite(motorPin, HIGH);
    delay(2000);
    digitalWrite(motorPin, LOW);
    for(;;){
      int sensorValue = analogRead(rainPin);
  Serial.print(sensorValue);
    if(sensorValue < 200){
      Serial.println(" - It's still raining.");
    }
      else{
      Serial.println(" - Good weather now. ");
      delay(2000);
    digitalWrite(motorPin, HIGH);
    delay(2000);
    digitalWrite(motorPin, LOW);
      break;
    }
  delay(5000);
    }
  }
  else{
    Serial.println(" - Nice Weather");
  }
    delay(5000);
    
}
