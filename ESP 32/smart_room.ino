#include <WiFi.h>
#include <PubSubClient.h>
#include <DHT.h>

#define DHTPIN 4
#define DHTTYPE DHT11
#define PIRPIN 5
#define LDRPIN 34

DHT dht(DHTPIN, DHTTYPE);

const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";
const char* mqttServer = "broker.hivemq.com";

WiFiClient espClient;
PubSubClient client(espClient);

void setup() {
  Serial.begin(115200);
  dht.begin();
  pinMode(PIRPIN, INPUT);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }

  client.setServer(mqttServer, 1883);
  while (!client.connected()) {
    client.connect("SmartRoomESP32");
  }
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  int motion = digitalRead(PIRPIN);
  int light = analogRead(LDRPIN);

  if (!isnan(temperature) && !isnan(humidity)) {
    String payload = "{";
    payload += "\"temperature\":" + String(temperature) + ",";
    payload += "\"humidity\":" + String(humidity) + ",";
    payload += "\"motion\":" + String(motion) + ",";
    payload += "\"light\":" + String(light);
    payload += "}";

    client.publish("smartroom/data", payload.c_str());
    Serial.println(payload);
  }

  delay(3000);
}