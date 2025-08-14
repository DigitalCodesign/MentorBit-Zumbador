/*


          ██████╗    ██╗    ██████╗    ██╗   ████████╗    █████╗    ██╗
          ██╔══██╗   ██║   ██╔════╝    ██║   ╚══██╔══╝   ██╔══██╗   ██║
          ██║  ██║   ██║   ██║  ███╗   ██║      ██║      ███████║   ██║
          ██║  ██║   ██║   ██║   ██║   ██║      ██║      ██╔══██║   ██║
          ██████╔╝   ██║   ╚██████╔╝   ██║      ██║      ██║  ██║   ███████╗
          ╚═════╝    ╚═╝    ╚═════╝    ╚═╝      ╚═╝      ╚═╝  ╚═╝   ╚══════╝

   ██████╗    ██████╗    ██████╗    ███████╗   ███████╗   ██╗    ██████╗    ███╗   ██╗
  ██╔════╝   ██╔═══██╗   ██╔══██╗   ██╔════╝   ██╔════╝   ██║   ██╔════╝    ████╗  ██║
  ██║        ██║   ██║   ██║  ██║   █████╗     ███████╗   ██║   ██║  ███╗   ██╔██╗ ██║
  ██║        ██║   ██║   ██║  ██║   ██╔══╝     ╚════██║   ██║   ██║   ██║   ██║╚██╗██║
  ╚██████╗   ╚██████╔╝   ██████╔╝   ███████╗   ███████║   ██║   ╚██████╔╝   ██║ ╚████║
   ╚═════╝    ╚═════╝    ╚═════╝    ╚══════╝   ╚══════╝   ╚═╝    ╚═════╝    ╚═╝  ╚═══╝


  Autor: Digital Codesign
  Version: 1.0.0
  Fecha de creación: Septiembre de 2024
  Fecha de version: Septiembre de 2024
  Repositorio: https://github.com/DigitalCodesign/MentorBit-Zumbador
  Descripcion:
    Este sketch muestra un ejemplo de como emitir uno o varios tonos con el modulo de zumbador
*/

// Incluir la libreria de MentorBitZumbador
#include <MentorBitZumbador.h>

// Se define el pin al cual se va a conectar el zumbador
#define PIN_ZUMBADOR A4

// Se crea el objeto zumbador y se le indica el pin al que esta conectado el zumbador
MentorBitZumbador zumbador(PIN_ZUMBADOR);

void setup(){

}

void loop(){
  // Emitir tonos de diferentes frecuencias y con delay diferentes para hacer una melodia
  zumbador.emitirTono(500);
  delay(500);
  zumbador.emitirTono(0);
  delay(1000);
  zumbador.emitirTono(400);
  delay(500);
  zumbador.emitirTono(0);
  delay(500);
  zumbador.emitirTono(200);
  delay(500);
  zumbador.emitirTono(0);
  delay(500);
  zumbador.emitirTono(400);
  delay(500);
  zumbador.emitirTono(0);
  delay(500);
}