#ifndef ANALOG_HARDWARE_H
#define ANALOG_HARDWARE_H

#include "stdint.h"
typedef enum ANALOG_STATUS_T
{
    STATUS_NOT_YET = 0,
    STATUS_OK
}STATUS_T;

void Analog_Hardware_Init(void);
STATUS_T Analog_Hardware_IsReady(uint8_t channel);
uint16_t Analog_Hardware_GetReading(uint8_t channel);
#endif // ANALOG_HARDWARE_H
