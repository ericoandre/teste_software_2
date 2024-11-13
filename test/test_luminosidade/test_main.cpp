#include <Arduino.h>
#include <unity.h>

#define LDRPIN A0 //Atribui A0 a variável ldr

int valorsensor;

// Teste para verificar se a leitura de luminosidade é válida
void test_luminosidade_reading() {
    pinMode(LDRPIN, INPUT);
    valorsensor = analogRead(LDRPIN);
    TEST_ASSERT(valorsensor  > 4 && valorsensor <= 30);  // luminosidade válida para o LDR
}

int runUnityTests(void) {
  UNITY_BEGIN();
  RUN_TEST(test_luminosidade_reading);
  return UNITY_END();
}

void setup() {
  delay(2000);
  runUnityTests();
}

void loop() {}