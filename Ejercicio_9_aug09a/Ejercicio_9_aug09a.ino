
enum class TaskStates {
    TASK1,
    TASK2,
    TASK3
};

static TaskStates currentState = TaskStates::TASK1;
static uint32_t lastStateChange = 0;

void task1() {
    static uint32_t lastTaskTime = 0;
    static constexpr uint32_t INTERVAL = 1000; // 1 segundo

    uint32_t currentTime = millis();
    if ((currentTime - lastTaskTime) >= INTERVAL) {
        lastTaskTime = currentTime;
        Serial.print("mensaje a 1Hz\n");
    }
}

void task2() {
    static uint32_t lastTaskTime = 0;
    static constexpr uint32_t INTERVAL = 500; // 0.5 segundos

    uint32_t currentTime = millis();
    if ((currentTime - lastTaskTime) >= INTERVAL) {
        lastTaskTime = currentTime;
        Serial.print("mensaje a 0.5Hz\n");
    }
}

void task3() {
    static uint32_t lastTaskTime = 0;
    static constexpr uint32_t INTERVAL = 250; // 0.25 segundos

    uint32_t currentTime = millis();
    if ((currentTime - lastTaskTime) >= INTERVAL) {
        lastTaskTime = currentTime;
        Serial.print("mensaje a 0.25Hz\n");
    }
}

void setup() {
    Serial.begin(115200);
}

void loop() {
    uint32_t currentTime = millis();
    static uint32_t lastTaskRun = 0;
    static constexpr uint32_t TASK_SWITCH_INTERVAL = 1000; // Cambia de tarea cada 1 segundo

    // Controla el cambio de tarea basado en el tiempo
    if ((currentTime - lastTaskRun) >= TASK_SWITCH_INTERVAL) {
        lastTaskRun = currentTime;

        switch (currentState) {
            case TaskStates::TASK1:
                task1();
                currentState = TaskStates::TASK2;
                break;

            case TaskStates::TASK2:
                task2();
                currentState = TaskStates::TASK3;
                break;

            case TaskStates::TASK3:
                task3();
                currentState = TaskStates::TASK1;
                break;

            default:
                break;
        }
    }
}
