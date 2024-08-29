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
Realizado 
### Ejercicio 11: realiza algunas pruebas
#### 0a ¿A qué letra corresponde?
0a significa salto de linea 
#### ¿Por qué enviaste la letra con el botón send? ¿Qué evento verifica si ha llegado algo por el puerto serial?
Porque send es enviar es lo mas logico, El evento que verifica si ha llegado algo por el puerto serial es la función `Serial.available()`. Esta función devuelve el número de bytes disponibles en la entrada del puerto serial. Si `Serial.available()` es mayor que 0, significa que hay datos listos para ser leídos.
#### Nota que luego de la r, abajo, hay un número. ¿Qué es ese número?
El número hexadecimal `72` representa el valor decimal `114`, que en la tabla ASCII corresponde al carácter `'r'`. En la conversión de datos, `72` se usa para codificar el carácter `'r'` en formato binario para transmisión y almacenamiento.
#### ¿Qué relación encuentras entre las letras y los números?
La relacion que tienen es que cada letra, cada simbolo es que esta representada con un numero.
#### ¿Qué es el 0a al final del mensaje y para qué crees que sirva?
El `0a` al final del mensaje es el código ASCII para el salto de línea (newline), que se utiliza para mover el cursor a la siguiente línea en la salida de texto.
#### ¿Tiene sentido esto?
Sí, tiene sentido. Leer el dato después de verificar su disponibilidad es necesario para liberar espacio, evitando que el sistema crea que siempre hay datos disponibles y bloqueando nuevos datos.
### Ejercicio 12: punteros
#### ¿Cómo se declara un puntero?
Se declara un puntero especificando el tipo de dato al que apunta seguido de un asterisco (*). Ejemplo: uint32_t *pvar;.

##### ¿Cómo se define un puntero? (cómo se inicializa)
Se define un puntero asignándole la dirección de una variable usando el operador de dirección (&). Ejemplo: pvar = &var;.

#### ¿Cómo se obtiene la dirección de una variable?
Se obtiene la dirección de una variable usando el operador de dirección (&). Ejemplo: &var.

#### ¿Cómo se puede leer el contenido de una variable por medio de un puntero?
Se lee el contenido de una variable usando el puntero con el operador de desreferenciación (*). Ejemplo: *pvar.

#### ¿Cómo se puede escribir el contenido de una variable por medio de un puntero?
Se escribe en una variable usando el puntero con el operador de desreferenciación (*). Ejemplo: *pvar = 10;.

### Ejercicio 13: punteros y funciones

Realizado 

### Ejercicio 14: retrieval practice (evaluación formativa)

Realizado. Archivo almacenado en el repositorio remoto 

### Ejercicio 15: punteros y arreglos

Claro, aquí tienes una explicación más detallada y diferenciada:

Qué hace: La función `processData` toma un arreglo de caracteres numéricos, calcula la suma de sus valores reales y almacena el resultado en una variable.

Cómo funciona:La constante `0x30` es el valor hexadecimal del carácter `'0'` en la codificación ASCII. Restar `0x30` de cada carácter numérico convierte el carácter en su valor entero correspondiente.

Pruebas:** Para probar la función, debes proporcionar un arreglo de caracteres numéricos como `{'1', '2', '3', '4', '5'}`. Luego, verifica que el resultado de la suma sea correcto, que en este caso debería ser 15.

#### ¿Por qué es necesario declarar rxData static? y si no es static ¿Qué pasa? ESTO ES IMPORTANTE, MUCHO.
Al declarar rxData como static, se conserva su valor entre llamadas a la función task1. Si no fuera static, se reiniciaría a cada llamada de task1, perdiendo los datos almacenados.
#### dataCounter se define static y se inicializa en 0. Cada vez que se ingrese a la función loop dataCounter se inicializa a 0? ¿Por qué es necesario declararlo static?
`dataCounter` debe ser `static` para mantener su valor entre llamadas a `task1`, permitiendo acumular correctamente el número de bytes leídos. Sin `static`, el contador se reiniciaría a 0 en cada llamada.
#### Finalmente, la constante 0x30 en (pData[i] - 0x30) ¿Por qué es necesaria?
La constante `0x30` es el valor ASCII del carácter `'0'`. Restar `0x30` convierte los caracteres numéricos (como `'5'`) en números reales (como 5).

### Ejercicio 16: análisis del api serial (investigación: hipótesis-pruebas)

#### ¿Qué pasa cuando hago un [Serial.available()]?
`Serial.available()` devuelve el número de bytes disponibles en el buffer de recepción. Si hay datos, devuelve un valor mayor que 0; si no hay datos, devuelve 0.
#### ¿Qué pasa cuando hago un [Serial.read()]?
`Serial.read()` lee y devuelve el siguiente byte disponible del buffer de recepción. Si no hay datos, devuelve -1. Cada llamada elimina el byte leído del buffer.
#### ¿Qué pasa cuando hago un Serial.read() y no hay nada en el buffer de recepción?
Si llamas a Serial.read() cuando no hay datos disponibles en el buffer, devuelve -1. Esto indica que no hay datos para leer en ese momento.
#### ¿Cuántos datos lee Serial.read()?
Serial.read() lee un solo byte de datos del buffer de recepción en cada llamada. Si necesitas leer más de un byte, tendrás que hacer múltiples llamadas a Serial.read().
#### ¿Y si quiero leer más de un dato? No olvides que no se pueden leer más datos de los disponibles en el buffer de recepción porque no hay más datos que los que tenga allí.
Para leer más de un byte, necesitas llamar a Serial.read() repetidamente en un bucle 
#### ¿Qué pasa si te envían datos por serial y se te olvida llamar Serial.read()?
Si olvidas llamar a `Serial.read()`, el buffer se llenará con nuevos datos y los antiguos quedarán sin leer o se sobrescribirán, lo que puede causar pérdida de datos y errores.

### Ejercicio 17: buffer de recepción

#### ¿Qué escenarios podría tener en este caso?
Si hay 2 bytes disponibles, se leen en `dataRx1` y `dataRx2`, mientras que `dataRx3` queda sin valor definido porque no hay más datos. Si hay más de 2 bytes, se leen los primeros 2, pero `dataRx3` no se asignará si no hay un tercer byte disponible, y los datos adicionales permanecen en el buffer. Si hay menos de 2 bytes, el `if` no se cumple, no se leen datos, y `dataRx1`, `dataRx2`, y `dataRx3` no se asignan.

### Ejercicio 18: retrieval practice (evaluación formativa)
### Trabajo Final Realizado con Juan Sebastian Marin
