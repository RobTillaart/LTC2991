#pragma once
//
//    FILE: LTC2991.h
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.0
//    DATE: 2021-05-10
// PURPOSE: 
//     URL: https://github.com/RobTillaart/LTC2991


#include "Arduino.h"
#include "Wire.h"

#define LTC2991_LIB_VERSION         (F("0.1.0"))


class LTC2991
{
public:
  explicit LTC2991(const int8_t address, TwoWire *wire = &Wire);

#if defined (ESP8266) || defined(ESP32)
  bool    begin(uint8_t sda, uint8_t scl, uint8_t cnt = 4);
#endif

  bool    begin();
  bool    isConnected();



private:
  uint8_t   _address;
  TwoWire * _wire;

};

// -- END OF FILE --
