# MentorBit-Zumbador
Esta librería está construida por Digital Codesign para utilizar junto con el kit educacional "MentorBit". La librería se compone de ocho clases diferentes que permiten utilizar las diferentes funcionalidades del MentorBit a través de varias funciones y ejemplos.

Puedes encontrar nuestro MentorBit y mucho más material de electrónica y robótica en nuestra tienda oficial:  [https://digitalcodesign.com/shop](https://digitalcodesign.com/shop)

# Modo de empleo

Una vez tengamos la librería instalada desde el Arduino IDE, tenemos que incluir la librería con la siguiente línea:

``#include <MentorBitZumbador.h>``

Además, definimos el puerto por el que vamos a mandar la señal del zumbador:

``#define PIN_ZUMBADOR A4``


### Constructor

Una vez incluida la librería y definido el pin dl zumbador, usamos el constructor para crear el objeto del zumbador, y empleamos el pin del zumbador que definimos anteriormente:

``MentorBitZumbador zumbador(PIN_ZUMBADOR);``

### Uso

Con nuestro zumbador ya definido, ya podemos emplear la función "emitirTono()" para que el zumbador emita la frecuencia que queramos emitir:

``zumbador.emitirTono(frecuencia)``

A partir de aquí, podemos usar el código de ejemplo para crear alguna melodía, o el uso que se le quiera dar. 
