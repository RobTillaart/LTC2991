
[![Arduino CI](https://github.com/RobTillaart/LTC2991/workflows/Arduino%20CI/badge.svg)](https://github.com/marketplace/actions/arduino_ci)
[![License: MIT](https://img.shields.io/badge/license-MIT-green.svg)](https://github.com/RobTillaart/LTC2991/blob/master/LICENSE)
[![GitHub release](https://img.shields.io/github/release/RobTillaart/LTC2991.svg?maxAge=3600)](https://github.com/RobTillaart/LTC2991/releases)


# LTC2991

Arduino library for a LTC2991


## Description

Experimental - not tested yet

## Interface

- **LTC2991(const int8_t address, TwoWire \*wire = Wire);**
- **bool begin(uint8_t sda, uint8_t scl)** ESP32 ea initializes the class.
sets I2C pins.
returns true if the LTC2991 is on the I2C bus.
- **bool begin()** UNO ea. initializes the class. 
returns true if the LTC2991 is on the I2C bus.
- **bool isConnected()** returns true if the LTC2991 is on the I2C bus.

## Core functions





## Performance




## Operational

See examples..

