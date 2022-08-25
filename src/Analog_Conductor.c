#include "Analog_Model.h"
#include "Analog_Hardware.h"
#include "Analog_Conductor.h"


void Analog_Conductor_Init(void)
{
    Analog_Model_Init();
    Analog_Hardware_Init();
}

void Analog_Conductor_Exec(void)
{
    uint16_t value = 0;
    for (int i = 0; i < ANALOG_NUM_CHANNELS; i++)
    {
        if (Analog_Hardware_IsReady(i) == STATUS_OK)
        {
            value = Analog_Hardware_GetReading(i);
            Analog_Model_AddReading(i, value);
        }
    }

}
