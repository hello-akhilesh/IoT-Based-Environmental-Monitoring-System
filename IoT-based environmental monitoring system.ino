#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include "DHT.h"
#include <ThingSpeak.h>

#define DHTPIN D2 //dht pin connected to D2
#define DHTTYPE DHT11

#define LDR_ANALOG A0

const char* ssid = "macha";
const char* password = "zxcvbnma";

unsigned long channelID = 3176775;  
const char* writeAPIKey = "CX1WWM3I4C3W3M57";

WiFiClient client;
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);

  
  dht.begin();


  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi Connected");

  ThingSpeak.begin(client);
}

void loop() {

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  int ldrAnalog = analogRead(LDR_ANALOG);


  Serial.print("Temp: "); Serial.println(temperature);
  Serial.print("Humidity: "); Serial.println(humidity);
  Serial.print("LDR A0: "); Serial.println(ldrAnalog);
  

  
  ThingSpeak.setField(1, temperature);
  ThingSpeak.setField(2, humidity);
  ThingSpeak.setField(3, ldrAnalog);
  

  int response = ThingSpeak.writeFields(channelID, writeAPIKey);

  if (response == 200) {
    Serial.println("Data uploaded successfully!");
  } else {
    Serial.print("Upload failed ");
    Serial.println(response);
  }

  delay(5000);  
}
