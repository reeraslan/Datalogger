#include "Analog_Model.h"

static uint16_t AnalogValues[ANALOG_NUM_CHANNELS];

void Analog_Init(void)
{
    uint8_t i;
    for(i = 0; i<ANALOG_NUM_CHANNELS; i++)
    {
        AnalogValues[i] = 0;
    }
}

uint16_t Analog_GetChannel(uint8_t Channel)
{
    if (Channel < ANALOG_NUM_CHANNELS - 1)
        return AnalogValues[ANALOG_NUM_CHANNELS];
    else
        return 0;
}