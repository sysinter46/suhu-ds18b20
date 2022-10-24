
#include <OneWire.h>
#include <DallasTemperature.h>

const int PIN_DS18 = 3;
              
OneWire ds(PIN_DS18);
DallasTemperature sensor(&ds);

void setup() 
{
  Serial.begin(9600);
  
  // Inisialisasi sensor
  sensor.begin();
}

void loop() 
{
  sensor.requestTemperatures();
  float suhu = sensor.getTempCByIndex(0);
  
  Serial.println(suhu);
  
  delay(200);
}
