#include <ESP8266WiFi.h>
#include <unity.h>

// Defina seu SSID e senha da rede Wi-Fi
String ssid = "ssid";
String password = "secret";

void test_wifi_connection_success() {
  WiFi.begin(ssid, password); // Inicia a conexão Wi-Fi
  // Aguarde até conectar ou até um timeout de 10 segundos
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  // Teste se a conexão foi bem-sucedida
  TEST_ASSERT_EQUAL(WL_CONNECTED, WiFi.status());
}

void test_wifi_disconnection() {
  WiFi.disconnect(); // Desconecta do Wi-Fi
  delay(1000);       // Aguarde para garantir a desconexão
  // Teste se o Wi-Fi foi desconectado
  TEST_ASSERT_NOT_EQUAL(WL_CONNECTED, WiFi.status());
}

void setup() {
  UNITY_BEGIN(); // Inicia o Unity Test Framework
  RUN_TEST(test_wifi_connection_success); // Teste de conexão
  // RUN_TEST(test_wifi_disconnection);     // Teste de desconexão
  UNITY_END();// Finaliza os testes
}

void loop() { }
