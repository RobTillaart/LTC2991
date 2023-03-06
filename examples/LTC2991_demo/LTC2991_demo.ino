//
//    FILE: LTC2991_demo.ino
//  AUTHOR: Rob Tillaart
// PUPROSE: detect device on I2C bus


#include "Wire.h"
#include "LTC2991.h"

LTC2991 LTC(0x48);  //  all address lines GND


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
  while (!LTC.isConnected())
  {
    Serial.println("Could not connect to device");
    delay(2000);
  }

  Serial.print(millis());
  Serial.print("\taddress: ");
  Serial.println(LTC.getAddress());
  
  delay(2000);
}


//  -- END OF FILE --

