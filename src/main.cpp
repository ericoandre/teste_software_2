#include <Arduino.h>


#define LDRPIN A0 //Atribui A0 a variável ldr

int valorsensor;

int add(int a, int b) {
  return a + b;
}

void blink_once(unsigned int delay_ms){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(delay_ms);
  digitalWrite(LED_BUILTIN, LOW);
  delay(delay_ms);
}
void setup() {
    // Serial.begin(9600);
    Serial.begin(115200);
    Serial.println("Program started!");
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(LDRPIN, INPUT);

    // connet();
}

void loop() {
  Serial.print("Addition: ");
  Serial.println(add(25, 15));
  blink_once(200);
  valorsensor = analogRead(LDRPIN);
  Serial.print("LDR : " ); 
  Serial.println(valorsensor);
}