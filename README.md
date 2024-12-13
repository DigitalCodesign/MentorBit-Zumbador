# MentorBit-Zumbador
Esta librería está construida por Digital Codesign para utilizar el módulo de Zumbador, principalmente diseñado para el kit educacional "MentorBit".

Puedes encontrar nuestro MentorBit y mucho más material de electrónica y robótica en nuestra tienda oficial:  [https://digitalcodesign.com/shop](https://digitalcodesign.com/shop)

# Modo de empleo

Una vez tengamos la librería instalada desde el Arduino IDE, tenemos que incluir la librería con la siguiente línea:

``#include <MentorBitZumbador.h>``


### Constructor

Una vez incluida la librería y definido el pin dl zumbador, usamos el constructor para crear el objeto del zumbador, y empleamos el pin del zumbador que definimos anteriormente:

``MentorBitZumbador zumbador(PIN);``

Siendo PIN el puerto por el que vamos a mandar la señal del zumbador.


### Uso

Con nuestro zumbador ya definido, ya podemos emplear la función "emitirTono()" para que el zumbador emita la frecuencia que queramos emitir:

``zumbador.emitirTono(frec)``

Siendo el argumento "frec" la frecuencia del tono que va a emitir el actuador en hercios .

A partir de aquí, podemos usar el código de ejemplo para crear alguna melodía, o el uso que se le quiera dar. 






