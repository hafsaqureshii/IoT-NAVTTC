#include <DHT.h>
DHT dht (2, DHT11);
void setup()
{
  Serial.begin(9600);
  dht.begin();
}
void loop()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float F = dht.readTemperature(true);
  float K = t + 273.01;
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println(" %");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C");
  Serial.print("Temperature in F: ");
  Serial.print(F);
  Serial.println(" *F");
  Serial.print("Temperature in K: ");
  Serial.print(K);
  Serial.println(" K");
  delay(5000);

}
