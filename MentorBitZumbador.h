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

#ifndef MentorBitZumbador_h
#define MentorBitZumbador_h

#include <Arduino.h>
#include <MentorPort.h>

class MentorBitZumbador : public MentorPort
{

    public:

        MentorBitZumbador(uint8_t zumbador_pin = 0);

        void configPort(const Port& port) override;
        void emitirTono(uint32_t frecuencia);
        void emitirTono(uint32_t frecuencia, uint32_t duracion);
        void silenciar();
        void beep(uint32_t duracion = 100);
        void sonidoExito();
        void sonidoError();

    private:

        Port _port;
};

#endif
