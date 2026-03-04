/*************************************************************
   BLYNK + ESP32 + DHT11 + Soil Moisture
*************************************************************/

#define BLYNK_TEMPLATE_ID "TMPL31SLRtvxk"
#define BLYNK_TEMPLATE_NAME "Smart Agriculture"

#define BLYNK_AUTH_TOKEN "3paeVbLH7oi4QE9XFYRzyrzeoN0Urfkp"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include "DHT.h"

// ---------- WiFi details ----------
char ssid[] = "Aiswarya";
char pass[] = "00000000";

// ---------- DHT Sensor ----------
#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// ---------- Soil Sensor ----------
#define SOIL_PIN 34   // Analog pin

void setup() {
  Serial.begin(115200);

  dht.begin();

  // ESP32 ADC settings
  analogReadResolution(12);
  analogSetAttenuation(ADC_11db);

  // Connect to WiFi + Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();   // Run Blynk tasks

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  int soilValue = analogRead(SOIL_PIN);
  int soilPercent = map(soilValue, 4095, 0, 0, 100);

  // Debugging in Serial Monitor
  Serial.println("---- Sensor Data ----");
  Serial.printf("Temp: %.2f °C\n", t);
  Serial.printf("Humidity: %.2f %%\n", h);
  Serial.printf("Soil Moisture: %d %%\n", soilPercent);

  // Send to Blynk Dashboard
  Blynk.virtualWrite(V0, t);
  Blynk.virtualWrite(V1, h);
  Blynk.virtualWrite(V2, soilPercent);

  delay(2000);
}
