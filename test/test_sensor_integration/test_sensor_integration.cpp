#include <Arduino.h>
#include <unity.h>

// Teste de integração
void test_sensor_integration() {
    // Configurações para sensores
    pinMode(A0, INPUT);
    int sensorValue = analogRead(A0);
    TEST_ASSERT(sensorValue > 0); // Exemplo: sensor deve retornar valor maior que 0
    // TEST_ASSERT(valorsensor  > 4 && valorsensor <= 30);
}

void setup() {
  UNITY_BEGIN(); // Inicia o Unity Test Framework
  RUN_TEST(test_sensor_integration); // Teste de conexão
  UNITY_END(); // Finaliza os testes
}

void loop() {}
