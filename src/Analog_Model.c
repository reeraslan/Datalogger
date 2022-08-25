#include "Analog_Model.h"

uint16_t AnalogValues[ANALOG_NUM_CHANNELS];

void Analog_Model_Init(void)
{
    uint8_t i;
    for(i = 0; i<ANALOG_NUM_CHANNELS; i++)
    {
        AnalogValues[i] = 0;
    }
}

uint16_t Analog_Model_GetChannel(uint8_t channel)
{
    if (channel < ANALOG_NUM_CHANNELS - 1)
    {
        return AnalogValues[channel];
    }
    else
    {
        return 0;
    }
}


void Analog_Model_AddReading(uint8_t channel, uint16_t adc_value)
{
    AnalogValues[channel] = adc_value;
}

