void setup() { 

  pinMode(LED_BUILTIN, OUTPUT); 

} 

  

void loop() { 

  static uint32_t previousTime = 0; 

  

  uint32_t currentTime = millis(); 

  

  if( (currentTime - previousTime) > 1000){ 

   Serial.print(' SOS1'); 

  } 

   if( (currentTime - previousTime) > 2000){ 

   Serial.print(' SOS2 '); 

  } 

   if( (currentTime - previousTime) > 3000){ 

   Serial.print(' SOS3 '); 
  } 

   

} 
 
