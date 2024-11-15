#include <Arduino.h>
#include <unity.h>

int add(int a, int b) {
  return a + b;
}

void teste_soma(void) {
  TEST_ASSERT_EQUAL(32, add(25, 7));
}

int runUnityTests(void) {
  UNITY_BEGIN();
  RUN_TEST(teste_soma);
  return UNITY_END();
}

void setup() {
  runUnityTests();
}

void loop() {}
