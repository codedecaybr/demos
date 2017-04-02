/*
  www.CodeDecay.com.br
  Licença de uso: Apache 2.0
  Amostra a temperatura e a luminosidade do ambiente para enviar via ESP8266
  para um canal do Thingspeak;
 */

// Arquivos das figuras
#include "WiFiEsp.h"
#include "SoftwareSerial.h"

SoftwareSerial ESP8266(10, 11); // RX do Arduino, TX do Arduino

unsigned long ultimoEnvio = millis();
char enderecoThingspeak[] = "api.thingspeak.com"; // endereço do Thingspeak
String keyThingspeak = ""; // a chave do seu canal
char ssidStation[] = "";            // nome da rede wifi a ser utilizada
char senhaStation[] = "";        // senha da rede wifi a ser utilizada


int lumi;
float temp;
String temperatura;
String luminosidade;

WiFiEspClient espCliente;


void setup() {
  Serial.begin(9600);
  ESP8266.begin(9600); // Inicializa comunic. serial Arduino <-> ESP
  WiFi.init( &ESP8266 ); /* Associa a interface serial do ESP8266 com o objeto
  WiFi do Arduino, indicando que todas as conexões de rede são feitas através
  do ESP8266 conectado na interface SoftwareSerial indicada */

  // Tenta conectar à rede wifi
  Serial.print( "Tentando conectar a rede wifi WPA de SSID: " );
  Serial.println( ssidStation );
  while ( WiFi.begin(ssidStation, senhaStation) != WL_CONNECTED ) delay(10);
  // Informa que a conexão foi bem sucedida e mostra informações mais detalhadas
  printWifiStatus();
}

void loop() {

  lumi = map(leLumi(A0), 64, 850, 0, 100);
  if (lumi < 0) lumi = 0;
  if (lumi > 100) lumi = 100;

  temp = leTemp(A1);

  temperatura = String(int(temp));
  luminosidade = String(lumi);

  if ( millis() > ultimoEnvio + 5000 )  {
    enviarTemperatura(); // envia a temperatura para o Thingspeak
    ultimoEnvio = millis(); // atualiza o momento em que a ultima requisição foi enviada.
  }

  Serial.println(temperatura);

  delay(500);



}

int leLumi(int pin) {
  long int soma = 0; // Guardaremos o somatorio nessa variavel
  for (int cont = 0; cont < 50; cont++) {  // repete 50 vezes
    soma = soma + analogRead(pin); // le o sensor analogico na porta A1 - escala de 0 a 1023
    delay(3); // O conversor AD do Arduino precisa de um "descanso"
  }
  return soma/50;
}

float leTemp(int pin) {
  int soma = 0; // Guardaremos o somatorio nessa variavel
  for (int cont = 0; cont < 50; cont++) {  // repete 50 vezes
    soma = soma + analogRead(pin); // le o sensor analogico na porta A1 - escala de 0 a 1023
    delay(3); // O conversor AD do Arduino precisa de um "descanso"
  }
  float tempC = (soma * 5.0 * 100 ) / ( 1023.0 * 50 ); // calcula a média e converte para temperatura
  return tempC;
}

void printWifiStatus() {
  // Imprime o SSID da rede a qual nos conectamos
  Serial.print("SSID: ");
  Serial.println( WiFi.SSID() );

  // Imprime o IP do ESP8266
  IPAddress ip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println( ip );

  // Imprime a potência do sinal
  Serial.print("Potencia do sinal (RSSI):");
  Serial.print(WiFi.RSSI());
  Serial.println(" dBm");

  Serial.println();
}

void enviarTemperatura() {

  // Se conseguir conectar ao servidor, faz a requisição:
  if ( espCliente.connect(enderecoThingspeak, 80) ) {
    Serial.println("Conectado ao servidor!");
    // Vamos montar a primeira linha do cabeçalho, a única que precisa ser alterada:
    String cabecalho = "GET /update?key=" + keyThingspeak + "&field1=" + temperatura + "&field2=" + luminosidade + " HTTP/1.1";
    espCliente.println(cabecalho);
    // Vamos montar as outras linhas do cabeçalho, que são estáticas:
    espCliente.println("Host: api.thingspeak.com");
    espCliente.println("Connection: close");
    espCliente.println();
  }
  espCliente.stop(); // Encerra a conexão com o servidor
  Serial.println();
}
