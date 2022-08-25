#ifndef ANALOG_MODEL_H
#define ANALOG_MODEL_H

#include "stdint.h"

#define ANALOG_NUM_CHANNELS 5

void Analog_Model_Init(void);
uint16_t Analog_Model_GetChannel(uint8_t channel);
void Analog_Model_AddReading(uint8_t channel, uint16_t adc_value);

#endif // ANALOG_MODEL_H
