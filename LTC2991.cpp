//
//    FILE: LTC2991.cpp
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.0
//    DATE: 2021-05-10
// PURPOSE: 
//     URL: https://github.com/RobTillaart/LTC2991
//
//  HISTORY:
//  0.1.0   2021-05-10  initial version
//


#include "LTC2991.h"


/////////////////////////////////////////////////////
//
// CONSTRUCTORS
//
LTC2991::LTC2991(const int8_t address, TwoWire *wire)
{
  _address = address;
  _wire = wire;
}


#if defined (ESP8266) || defined(ESP32)
bool LTC2991::begin(uint8_t sda, uint8_t scl, uint8_t cnt)
{
  _cnt = cnt;
  _wire = &Wire;
  _wire->begin(sda, scl);
  if (! isConnected()) return false;
  return true;
}
#endif


bool LTC2991::begin()
{
  _wire->begin();
  if (! isConnected()) return false;
  return true;
}


bool LTC2991::isConnected()
{
  _wire->beginTransmission(_address);
  return ( _wire->endTransmission() == 0);
}



// -- END OF FILE --
