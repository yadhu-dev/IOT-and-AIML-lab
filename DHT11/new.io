#include <DHT.h>
#define DHT_PIN 8
#define DHT_TYPE 11

DHT dht(DHT_PIN,DHT_TYPE);

void setup(){
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

  Serial.println("");
  Serial.println("------------------------------------------------------");
  Serial.println("");

  delay(2000);
}
   
