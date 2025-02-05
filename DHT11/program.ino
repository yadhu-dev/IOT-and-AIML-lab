//Caution --> This is Arduino program  not for ESP32

#include <DHT11.h>
#define DHT_PIN 8
#define DHT_TYPE 11

DHT dht(DHT_PIN,DHT_TYPE);

void main(){
  dht.begin();
  Serial.begin(9600);
}
void loop(){
  float Temperature = dht.readTemperature();
  float Humidity = dht.readHumidity();
  Serial.print("Humidity :");
  Serial.print(Humidity);
  Serial.println("%");

  Serial.print("Temperature :");
  Serial.print(Temperature);
  Serial.println("°c");

  delay(2000);
}
