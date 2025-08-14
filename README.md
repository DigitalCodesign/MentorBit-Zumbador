# MentorBit-Zumbador

Esta librería está diseñada para que puedas controlar la emisión de sonido mediante un **módulo zumbador** conectado a tu placa MentorBit.

Si estás empezando en el mundo de la electrónica, ¡no te preocupes! MentorBit está pensado para que aprender sea fácil y divertido. Esta placa ya incluye un montón de componentes (LEDs, pulsadores, pantallas, etc.) y utiliza conectores especiales (JST) para que puedas añadir nuevos sensores y módulos sin tener que pelearte con un montón de cables. Pásate por nuestra web para saber más de MentorBit y nuestros productos [pinchando aquí](https://digitalcodesign.com/).

![Render del Módulo MentorBit Zumbador.](https://github.com/DigitalCodesign/MentorBit-Zumbador/blob/main/assets/Buzzer_Module.png)

Con esta librería, podrás generar sonidos, alarmas o señales acústicas de manera sencilla en tus proyectos.

---

## Descripción

### ¿Qué es un zumbador?

Un zumbador (o buzzer) es un componente electrónico capaz de emitir un tono audible cuando se le aplica una señal.

Es ideal para generar retroalimentación sonora, alarmas, notificaciones o música simple.

---

### ¿Qué hace esta librería?

La librería **MentorBit-Zumbador** facilita el control de un zumbador conectado a la placa MentorBit. Permite emitir tonos específicos o simplemente activar y desactivar el zumbador mediante señales digitales o PWM.

---

### ¿Qué puedes construir con este módulo?

- Alarmas sonoras para notificar eventos.
- Juegos con efectos de sonido simples.
- Proyectos educativos interactivos con retroalimentación sonora.

---

## Cómo empezar

### 1. **Conexión del Módulo**

Conecta el módulo zumbador a uno de los puertos digitales con conector JST de 4 pines ubicados en la sección "Puertos para Módulos" de la placa MentorBit.

### 2. **Instalación de la Librería**

- Abre tu entorno de programación IDE de Arduino.
- Ve al menú *Programa -> Incluir Librería -> Administrar Librerías...*
- En el buscador, escribe ***MentorBit-Zumbador*** y haz clic en "Instalar".

![Ejemplo de búsqueda en el gestor de librerías del IDE de Arduino.](https://github.com/DigitalCodesign/MentorBit-Zumbador/blob/main/assets/library_instalation_example.png)

---

## Ejemplo Básico: Activar el zumbador

Este ejemplo activa el zumbador durante 500 ms cada segundo.

```cpp
#include <MentorBitZumbador.h>

#define PIN_ZUMBADOR A4

MentorBitZumbador zumbador(PIN_ZUMBADOR);

void setup() {
    // Nada necesario por ahora
}

void loop() {
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

```

---

## Funciones Principales

- `void emitirTono(uint16_t frecuencia)`  
  Emite un tono específico.

---

## Recursos Adicionales

- [Web del fabricante](https://digitalcodesign.com/)
- [Tienda Online de Canarias](https://canarias.digitalcodesign.com/shop)
- [Tienda Online de Península](https://digitalcodesign.com/shop)
- [Web Oficial de MentorBit](https://digitalcodesign.com/mentorbit)
- [Web Oficial del Módulo Zumbador](https://digitalcodesign.com/shop/00038782-mentorbit-modulo-de-zumbador-pasivo-8109?search=zumbador&order=create_date+desc#attr=)
- [Manual de usuario del Módulo](https://drive.google.com/file/d/18sUkUQClbDT2SBkD8kJlMwSskUoMifrE/view?usp=drive_link)
- [Modelo 3D del Módulo en formato .STEP](https://drive.google.com/file/d/12CYyLkPSA0QM2U7H-pLxTs66EK5YwYwW/view?usp=drive_link)
