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
    Analog_Model_Init_Expect();
    Analog_Hardware_Init_Expect();

    Analog_Conductor_Init();
}

void test_Analog_Conductor_should_NotUpdateAnalogModel_If_NoChannelIsReady(void)
{
    Analog_Hardware_IsReady_ExpectAndReturn(0, STATUS_NOT_YET);
    Analog_Hardware_IsReady_ExpectAndReturn(1, STATUS_NOT_YET);
    Analog_Hardware_IsReady_ExpectAndReturn(2, STATUS_NOT_YET);
    Analog_Hardware_IsReady_ExpectAndReturn(3, STATUS_NOT_YET);
    Analog_Hardware_IsReady_ExpectAndReturn(4, STATUS_NOT_YET);

    Analog_Conductor_Exec();
}

void test_Analog_Conductor_should_UpdateAnalogModel_When_AnyChannelHasNewData(void)
{
    Analog_Hardware_IsReady_ExpectAndReturn(0, STATUS_OK);
    Analog_Hardware_GetReading_ExpectAndReturn(0, 0x5a5a);
    Analog_Model_AddReading_Expect(0, 0x5a5a);

    Analog_Hardware_IsReady_ExpectAndReturn(1, STATUS_NOT_YET);
    Analog_Hardware_IsReady_ExpectAndReturn(2, STATUS_NOT_YET);
    Analog_Hardware_IsReady_ExpectAndReturn(3, STATUS_NOT_YET);
    Analog_Hardware_IsReady_ExpectAndReturn(4, STATUS_NOT_YET);

    Analog_Conductor_Exec();
}

#endif // TEST
