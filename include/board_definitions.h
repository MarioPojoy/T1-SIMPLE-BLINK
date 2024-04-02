#if defined(ARDUINO_AVR_UNO)       
  #define BOARD "ARDUINO UNO"
#elif defined(ARDUINO_AVR_MEGA2560)
  #define BOARD "ARDUINO MEGA"
#elif defined(ARDUINO_D1_UNO32)       
  #define BOARD "WEMOS D1 R32"
#elif defined(ARDUINO_RASPBERRY_PI_PICO)       
  #define BOARD "RASPBERRY PI PICO"
#elif defined(ARDUINO_ESP8266_NODEMCU_ESP12E)       
  #define BOARD "NODEMCU V2"
#else
  #define BOARD "NO SE QUIEN SOY"
#endif