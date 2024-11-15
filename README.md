# teste_software_2

## Objetivo, Escopo e Motivação para a Pesquisa

O objetivo principal desta pesquisa foi explorar a automação de tarefas relacionadas aos testes de software em sistemas embarcados, com ênfase no uso da ferramenta PlatformIO para criação e execução de testes. O foco esteve na criação de três testes automatizados: dois testes de integração e um teste de funcionalidade. O tema está alinhado à crescente necessidade de garantir confiabilidade e eficiência em sistemas embarcados, especialmente em aplicações críticas como IoT e dispositivos conectados.

A motivação decorre da complexidade inerente ao desenvolvimento de software embarcado, onde o comportamento final depende de uma interação eficiente entre hardware e software. Testes manuais podem ser demorados e suscetíveis a erros, o que justifica a automação como uma abordagem essencial para melhorar a produtividade e a qualidade do produto.

## Descrição do que foi feito
 1. Estruturação do Projeto no PlatformIO
   - Configuração inicial do ambiente de desenvolvimento utilizando PlatformIO, um ecossistema ideal para desenvolvimento e testes em dispositivos embarcados como ESP8266.
   - Configuração do arquivo platformio.ini para suportar diversas configuraces de board, incluindo parâmetros de upload e logs.
 2. Desenvolvimento dos Testes
   - Testes de Integração:
     - Teste de Conexão Wi-Fi: Validou a capacidade do dispositivo de conectar-se a uma rede Wi-Fi com SSID e senha válidos.
   - Teste de Funcionalidade:
     <!-- - Verificou o comportamento do LED embutido (LED_BUILTIN), testando se ele acende e apaga conforme esperado em um cenário de operação básico. -->
     - Verificou tambe o comportamento de uma funcao matematica que onde recebe dois valores retorna a soma.
 3. Execução e Resultados
   - Os testes foram executados no hardware real (ESP8266).
   - Resultados foram coletados automaticamente e mostrados no console do PlatformIO, evidenciando o sucesso ou falha de cada caso de teste.
![](img/saida.png)  

 

