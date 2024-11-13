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
mm
void teste_soma(void) {
  // TEST_ASSERT_EQUAL(32, add(25, 7));
}

int runUnityTests(void) {
  UNITY_BEGIN();
  RUN_TEST(teste_soma);
  return UNITY_END();
}

/**
  * For Arduino framework
  */
void setup() {
  delay(2000);
  runUnityTests();
}

void loop() {}
