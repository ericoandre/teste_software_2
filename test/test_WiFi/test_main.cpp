#include <Arduino.h>
#include <unity.h>
#include <ESP8266WiFi.h>

const char* ssid = "intel";
const char* passwd = "12345678";

void connet(){
  WiFi.begin(ssid, passwd);
  Serial.println("Connecting....");
  while (WiFi.status() != WL_CONNECTED){
    delay(50);
    Serial.print(".");
  }
  Serial.println(WiFi.localIP());
}
