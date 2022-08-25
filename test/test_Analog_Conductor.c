#ifdef TEST

#include "unity.h"

#include "mock_Analog_Model.h"
#include "mock_Analog_Hardware.h"
#include "Analog_Conductor.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Analog_Conductor_should_InitSubmodules(void)
{
    Analog_Init_Expect();
    Analog_Hardware_Init_Expect();

    Analog_Conductor_Init();
}

#endif // TEST
