#include "Analog_Model.h"
#include "Analog_Hardware.h"
#include "Analog_Conductor.h"


void Analog_Conductor_Init(void)
{
    Analog_Init();
    Analog_Hardware_Init();

}