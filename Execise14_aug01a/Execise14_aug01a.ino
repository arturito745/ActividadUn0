static void changeVar(uint32_t *pdata)
{
    *pdata = 10;
}

static void printVar(uint32_t value)
{
    Serial.print("var content: ");
    Serial.print(value);
    Serial.print('\n');
}

// Nueva función para intercambiar los valores de dos variables
static void swapVars(uint32_t *pvar1, uint32_t *pvar2)
{
    uint32_t temp = *pvar1;  // Guarda el valor de pvar1 en una variable temporal
    *pvar1 = *pvar2;         // Asigna el valor de pvar2 a pvar1
    *pvar2 = temp;           // Asigna el valor guardado en la variable temporal a pvar2
}

void task1()
{
    enum class Task1States {
        INIT,
        WAIT_DATA
    };
    static Task1States task1State = Task1States::INIT;

    switch (task1State)
    {
    case Task1States::INIT:
    {
        Serial.begin(115200);
        task1State = Task1States::WAIT_DATA;
        break;
    }

    case Task1States::WAIT_DATA:
    {
        // Evento 1: ¿Ha llegado al menos un dato por el puerto serial?        
        if (Serial.available() > 0)
        {
            Serial.read();

            uint32_t var1 = 0;
            uint32_t var2 = 0;
            uint32_t *pvar1 = &var1;
            uint32_t *pvar2 = &var2;

            // Cambia el valor de var1 usando pvar1
            changeVar(pvar1);

            // Imprime los valores antes del intercambio
            Serial.print("Antes del intercambio ");
            printVar(var1);
            printVar(var2);

            // Intercambia los valores de var1 y var2
            swapVars(pvar1, pvar2);

            // Imprime los valores después del intercambio
            Serial.print(" Despues de el intercambio ");
            printVar(var1);
            printVar(var2);
        }
        break;
    }

    default:
    {
        break;
    }
    }
}

void setup()
{
    task1();
}

void loop()
{
    task1();
}
