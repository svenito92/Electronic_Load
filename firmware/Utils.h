#ifndef UTILS_H
#define UTILS_H

#include <Arduino.h>
#include <Wire.h>

#define BOARD1  //First version, comment to use second board

uint8_t i2c_write(byte deviceAddr,uint8_t address, long data, uint8_t l);
long i2c_read(byte deviceAddr, uint8_t address, uint8_t l);

#endif
