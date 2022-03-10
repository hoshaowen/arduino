#include <Arduino.h>
#include "PinDefinitionsAndMore.h"
#include <IRremote.hpp>
#define DECODE_NEC
#define DECODE_DISTANCE
#define INFO
#define DELAY_AFTER_SEND 2000
#define DELAY_AFTER_LOOP 5000
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);

  Serial.begin(115200);
  Serial.println(F("STSRT "_FILE_ "from"_DATE_"\r\nUsing library version"VERSION_IRREMOTE;
  IrSender.begin();
  Serial.print(F("Ready to send IR signal at pin"));
  Serial.println(IR_SEND_PIN);
  }

void setup(){
  #if defined(_IR_MEASURE_TIMING) && defined(_IR_TIMING_TEST_PIN)
      pinMode(_IR_TIMING_TEST_PIN,OUTPUT);
  #endif
      Serial.begin(115200);
  #if defined(__AVR_ATmega32U4__) || defined(SERIAL_PORT_USBVIRTUAL) || defined(SERIAL_USB) || defined  
  }
