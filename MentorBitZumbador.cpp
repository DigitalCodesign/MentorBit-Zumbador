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


    @author Digital Codesign
    @version 1.1.0
    @date Fecha de creación: Septiembre de 2024
    @date Fecha de versión: Mayo de 2026
    @see Repositorio: https://github.com/DigitalCodesign/MentorBit-Zumbador
    * @brief Descripción:
        Esta librería está específicamente diseñada para ser utilizada junto con 
        el módulo zumbador de MentorBit. Se ha optimizado para garantizar la 
        correcta configuración de hardware e incluye métodos extendidos de 
        notificaciones (UI acústica).
    * @details Métodos principales:
        - MentorBitZumbador  -> Constructor de la clase.
        - emitirTono         -> Emite un tono en el zumbador (frecuencia infinita o por tiempo).
        - silenciar          -> Detiene inmediatamente cualquier sonido activo.
    * Métodos de interfaz (Alertas predefinidas):
        - beep               -> Emite un pitido corto, ideal para pulsaciones de botones.
        - sonidoExito        -> Reproduce una secuencia de confirmación positiva.
        - sonidoError        -> Reproduce una secuencia de alerta o fallo.

*/

#include <MentorBitZumbador.h>

MentorBitZumbador::MentorBitZumbador(uint8_t zumbador_pin) {

    _port.gpios[1] = zumbador_pin;
    pinMode(_port.gpios[1], OUTPUT);

}

void MentorBitZumbador::configPort(const Port &port) {

    _port.type = port.type;
    _port.location = port.location;
    _port.gpios[0] = port.gpios[0];
    _port.gpios[1] = port.gpios[1];
    pinMode(_port.gpios[1], OUTPUT);

}

void MentorBitZumbador::emitirTono(uint32_t frecuencia) {

    tone(_port.gpios[1], frecuencia);

}

void MentorBitZumbador::emitirTono(uint32_t frecuencia, uint32_t duracion) {

    tone(_port.gpios[1], frecuencia, duracion);

}

void MentorBitZumbador::silenciar() {

    noTone(_port.gpios[1]);

}

void MentorBitZumbador::beep(uint32_t duracion) {

    emitirTono(2000, duracion);

}

void MentorBitZumbador::sonidoExito() {

    emitirTono(1000, 100);
    delay(100);
    emitirTono(1500, 100);
    delay(100);
    emitirTono(2000, 150);

}

void MentorBitZumbador::sonidoError() {

    emitirTono(300, 300);
    delay(300);
    emitirTono(300, 300);

}
