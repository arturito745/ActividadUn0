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
### Ejercicio 8: retrieval practice (evaluación formativa)
#### ¿Cuáles son los estados del programa?
El programa tiene dos funciones: `setup()`, que configura el pin del LED como salida, y `loop()`, que se ejecuta en un ciclo continuo. En `loop()`, se mide el tiempo transcurrido y, según el intervalo (1, 2 o 3 segundos), se imprime "SOS1", "SOS2" o "SOS3" en el monitor serial. Sin embargo, debido a que el tiempo no se actualiza, todos los mensajes se imprimen cada vez que se cumplen 3 segundos. Para corregirlo, se debería actualizar el tiempo después de cada mensaje.
#### ¿Cuáles son los eventos?
Los eventos del programa incluyen el inicio, donde se configura el pin del LED, y la medición continua del tiempo en `loop()`. Según los intervalos de tiempo (1, 2, o 3 segundos), se generan eventos que imprimen los mensajes `"SOS1"`, `"SOS2"`, o `"SOS3"` en el monitor serial.
#### ¿Cuáles son las acciones?
Las acciones del programa incluyen configurar el pin del LED como salida, medir el tiempo transcurrido y, al alcanzar los intervalos de 1, 2 y 3 segundos, imprimir `"SOS1"`, `"SOS2"`, o `"SOS3"` en el monitor serial.
### Ejercicio 9: tareas concurrentes (evaluación formativa)
` REALIZADO `
### Ejercicio 10: monitor serial
