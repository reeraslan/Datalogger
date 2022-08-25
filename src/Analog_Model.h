#ifndef ANALOG_MODEL_H
#define ANALOG_MODEL_H

#include "stdint.h"

#define ANALOG_NUM_CHANNELS 5

void Analog_Init(void);
uint16_t Analog_GetChannel(uint8_t Channel);

#endif // ANALOG_MODEL_H
