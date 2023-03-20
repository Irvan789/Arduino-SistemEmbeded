#include <WiFi.h>
#include <FirebaseESP32.h>

#define FIREBASE_HOST "FIREBASE_REALTIME_DATABASE_HOST"
#define FIREBASE_AUTH "FIREBASE_REALTIME_DATABASE_AUTH"

#define WiFi_SSID "YOUR_WIFI_SSID"
#define WiFi_PASS "YOUR_WIFI_PASS"

int TRG_PIN = 27;
int ECH_PIN = 26;

FirebaseData fData;
FirebaseJson fJson1;
FirebaseJson fJson2;

int pulse, cm;

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

  pinMode(TRG_PIN, OUTPUT);
  pinMode(ECH_PIN, INPUT);
}

void loop()
{
  digitalWrite(TRG_PIN, LOW);
  delayMicroseconds(100);
  digitalWrite(TRG_PIN, HIGH);
  delayMicroseconds(100);
  digitalWrite(TRG_PIN, LOW);
  pulse = pulseIn(ECH_PIN, HIGH);
  cm = pulse * 0.034 / 2;

  delay(1000);

  fJson1.set("/nama", "Nama Kamu");
  Firebase.updateNode(fData, "/JSON Name/No Absen", fJson1);
  fJson2.set("/nama", "Nama Sensor");
  fJson2.set("/value", cm);
  Firebase.updateNode(fData, "/JSON Name/No Absen/sensor", fJson2);
  Serial.print("Update Success!");
}