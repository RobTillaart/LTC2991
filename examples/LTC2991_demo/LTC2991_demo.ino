//
//    FILE: LTC2991_demo.ino
//  AUTHOR: Rob Tillaart
//    DATE: 2021-05-10
//
// PUPROSE: demo


#include "Wire.h"
#include "LTC2991.h"

LTC2991 LTC(0x20);

void setup()
{
  Serial.begin(115200);
  Serial.println(__FILE__);
  Serial.print("LTC2991_LIB_VERSION:\t");
  Serial.println(LTC2991_LIB_VERSION);

  Wire.begin();
  Wire.setClock(100000);
  LTC.begin();

}


void loop()
{
}


// -- END OF FILE --
