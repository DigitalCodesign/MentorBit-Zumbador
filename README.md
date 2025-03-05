# MentorBitZumbador

Librería para el control de un zumbador piezoeléctrico en módulos compatibles con MentorBit.

## Descripción

La librería `MentorBitZumbador` facilita el control de un zumbador piezoeléctrico en módulos compatibles con MentorBit. Permite generar tonos específicos, ideal para proyectos que requieren alertas sonoras, melodías simples o efectos de sonido.

## Modo de Empleo

1.  **Instalación:**
    * Abre el IDE compatible con MentorBit.
    * Ve a "Herramientas" -> "Gestionar librerías..."
    * Busca "MentorBitZumbador" e instálala.

2.  **Ejemplo básico:**

    ```c++
    #include <MentorBitZumbador.h>

    MentorBitZumbador zumbador(8); // Zumbador conectado al pin 8

    void setup() {
      // No se necesita configuración adicional en el setup()
    }

    void loop() {
      zumbador.emitirTono(1000); // Emite un tono de 1kHz
      delay(500);
      zumbador.emitirTono(0);    // Detiene el tono
      delay(500);
    }
    ```

## Constructor y Métodos Públicos

### Constructor

* `MentorBitZumbador(uint8_t zumbador_pin = 0)`: Crea un objeto `MentorBitZumbador`.
    * `zumbador_pin`: Pin digital al que está conectado el zumbador. Si no se especifica, se asume que no está conectado a ningún pin inicialmente.

### Métodos

* `void emitirTono(uint32_t tone_value)`: Emite un tono en el zumbador.
    * `tone_value`: Frecuencia del tono en Hz. Un valor de 0 detiene el tono.
