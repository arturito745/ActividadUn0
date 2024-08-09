# Unidad 1. Software para sistemas embebidos
### Ejercicio 3a: retrieval practice (evaluación formativa)
#### ID 00491253 - RICARDO ARTURO GUERRERO OLIVA 
#### En este ejercicio aprendi a como hacer funcionar el led, y como al aumentar el numero de millis (Milisisegundos) aumenta el tiempo donde se apaga y prende el led.
### Ejercicio 5: documentación
#### La Raspberry Pi Pico cuenta con varias bibliotecas para su programación y control de hardware(perifericos), como el **Arduino Core** para usarla con el entorno de Arduino y el **Pico SDK** para C/C++. También incluye **MicroPython** para programación rápida, **Pico Graphics** para manejar pantallas, y **Pico PIO** para tareas avanzadas de I/O. Estas herramientas permiten desarrollar proyectos complejos. Tambien nos sirve para proyectos de robotica y mucho mas ya que cuentas con un microprocesador RP2040.
### Ejercicio 6: caso de estudio
#### ¿Cómo se ejecuta este programa?
El programa se inicia cambiando el estado a espera. Luego, en un bucle continuo, revisa si ha pasado un segundo desde la última vez que imprimió el tiempo. Si es así, imprime el tiempo actual y actualiza el registro del tiempo. El proceso se repite indefinidamente.
#### ¿Cuántas veces se ejecuta el código en el case Task1States::INIT?
`case Task1States::INIT` solo se ejecuta una vez es el que inicializa. Esto ocurre cuando `task1()` se llama por primera vez después de que el programa se inicia, ya que el estado se cambia a `WAIT_TIMEOUT`.
#### ¿Pudiste ver este mensaje? `Serial.print Task1States::WAIT_TIMEOUT\n;` . ¿Por qué crees que ocurre esto?
Sí, el mensaje Serial.print("Task1States::WAIT_TIMEOUT\n"); se imprime dentro del case Task1States::INIT. Esto sucede solo la primera vez que task1() se ejecuta porque en ese momento el estado es INIT. El propósito de este mensaje es confirmar que la máquina de estados ha cambiado al WAIT_TIMEOUT.
### Ejercicio 7: análisis del programa de prueba
Leido y comprendido 
#### ¿Para qué sirve? (millis)
`millis()` da el tiempo en milisegundos desde el inicio del programa.

