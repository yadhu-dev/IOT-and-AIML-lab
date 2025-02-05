#define sensor_val 3

void setup() {
    pinMode(sensor_val,INPUT);
    Serial.begin(9600);
}

void loop() {
  
    if(digitalRead(sensor_val)){
      Serial.println("Motion Detected...");
    }
    else{
    Serial.println("Motion not detected...");
    }
    delay(500);
}
