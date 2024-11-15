#include <Arduino.h>
#include <ESP8266WiFi.h>
// #include <PubSubClient.h>

#define LDRPIN A0 //Atribui A0 a variável ldr

//Declaracao das variaveis da rede Wi-Fi
String SSID = "COMMON-Graciele";
String PASSWORD = "191085$%@*)&!@-P";

float valorsensor = 0.0;

void initSerial(int PORT);
void InitOutput();
void initWiFi(String SSID, String PASSWORD);

void blink_once(unsigned int delay_ms);

//---------------------------------------------------------------------------------------

void setup() {
  InitOutput();
  initSerial(115200);
  initWiFi(SSID, PASSWORD);
}

void loop() {
  Serial.print("Addition: ");
  Serial.println(25 + 15);
  blink_once(200);
  valorsensor = analogRead(LDRPIN);
  Serial.print("LDR : " ); 
  Serial.println(valorsensor);
}

//---------------------------------------------------------------------------------------

void initSerial(int PORT){
  Serial.begin(PORT); // 9600 115200
}
void InitOutput(){
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LDRPIN, INPUT);
}

void reconectWiFi(String SSID, String PASSWORD) {
  if (WiFi.status() == WL_CONNECTED)
    return;
  
  //Requisita a conexao do dispositivo a rede
  Serial.print("Conectando a rede: ");
  Serial.println(SSID);
  WiFi.mode(WIFI_STA);
  WiFi.begin(SSID, PASSWORD);
  
  //Aguarda ate que o dispositivo se conecte a rede
  while (WiFi.status() != WL_CONNECTED){
    delay(100);
    Serial.print(".");
  }
  //Quando conectado, exibe o endereco IP
  Serial.println();
  Serial.print("Conectado com sucesso na rede ");
  Serial.print(SSID);
  Serial.println("IP obtido: ");
  Serial.println(WiFi.localIP());
}

void initWiFi(String SSID, String PASSWORD) {
  delay(10);
  Serial.println("------Conexao WI-FI------");
  Serial.print("Conectando-se na rede: ");
  Serial.println(SSID);
  Serial.println("Aguarde");
  reconectWiFi(SSID, PASSWORD);
}


void blink_once(unsigned int delay_ms){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(delay_ms);
  digitalWrite(LED_BUILTIN, LOW);
  delay(delay_ms);
}
