/*
  www.CodeDecay.com.br
  Licença de uso: Apache 2.0
  Anima uma figura do gato Pusheen de acordo com a velocidade estabelecida
  pelo potenciômetro. LEDs decorativos.
 */

//Diz para este programa em que arquivo buscar as funções que serão utilizadas
#include <U8g2lib.h>
#include <U8x8lib.h>

// Arquivos das figuras
#include "pusheen.h"
#include "pusheen_flip.h"

int conta_frame = 0;

U8G2_SSD1306_128X64_NONAME_F_HW_I2C oled(U8G2_R0);  // Declara o nosso display OLED.

void setup() {
  Serial.begin(9600);
    oled.begin();       // Inicializa a comunicacao com o display
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
}

void loop() {

    int val = map(analogRead(A0), 0, 990, 30, 300);

    //Executa os desenhos
    draw();
    //Envia os desenhos para o display
    oled.sendBuffer();

    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    conta_frame = conta_frame + 1;
    if ( conta_frame > 1) conta_frame = 0;
    delay(val/2);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(val/2 + 15);



}

void draw() {
    if (conta_frame) oled.drawXBMP(128-pusheen_width, 0, pusheen_width, pusheen_height, pusheen_bits); // Desenha o gatinho olhando para a esquerda se conta_frame == 1
    else oled.drawXBMP(128-pusheen_flip_width, 0, pusheen_flip_width, pusheen_flip_height, pusheen_flip_bits); // Desenha o gatinho olhando para a direita se conta_frame == 0
}
