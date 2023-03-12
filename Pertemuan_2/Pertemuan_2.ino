#include <WiFi.h>
#include <FirebaseESP32.h>

#define FIREBASE_HOST "FIREBASE_REALTIME_DATABASE_HOST"
#define FIREBASE_AUTH "FIREBASE_REALTIME_DATABASE_AUTH"

#define WiFi_SSID "YOUR_WIFI_SSID"
#define WiFi_PASS "YOUR_WIFI_PASS"

FirebaseData fData;
FirebaseJson fJson;

void setup()
{
  Serial.begin(115200);
  WiFi.begin(WiFi_SSID, WiFi_PASS);
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(300);
  }

  Serial.println();
  Serial.print("WiFi IP:");
  Serial.println(WiFi.localIP());
  Serial.println();

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.reconnectWiFi(true);
  Firebase.setReadTimeout(fData, 1000 * 60);
  Firebase.setwriteSizeLimit(fData, "tiny");
  Serial.println("-----------------------");
  Serial.println("Connected!");
}

void loop()
{
  String data = "Nama Kamu (NIM)";
  Serial.println(data);
  delay(1000);

  fJson.set("/01", data);
  Firebase.updateNode(fData, "/JSON Name", fJson);
}