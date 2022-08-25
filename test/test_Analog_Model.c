#ifdef TEST

#include "unity.h"

#include "Analog_Model.h"

extern uint16_t AnalogValues[ANALOG_NUM_CHANNELS];

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Analog_Model_GetChannel_should_Return0_when_ChannelIllegal(void)
{

    TEST_ASSERT_EQUAL_HEX16(0, Analog_Model_GetChannel(ANALOG_NUM_CHANNELS));
}

void test_Analog_Model_GetChannel_should_Return0_when_NoAnalogValueCaptured(void)
{

    Analog_Model_Init();

    TEST_ASSERT_EQUAL_HEX16(0, Analog_Model_GetChannel(0));
    TEST_ASSERT_EQUAL_HEX16(0, Analog_Model_GetChannel(ANALOG_NUM_CHANNELS - 1));
}

//Always left a note for the functions that will need implemenetation and testing later !
void test_Analog_Model_GetChannel_should_ReturnLatestData(void)
{
    Analog_Model_Init();

    Analog_Model_AddReading(0, 0x1234);

    TEST_ASSERT_EQUAL_HEX16(0x1234, Analog_Model_GetChannel(0));
    TEST_ASSERT_EQUAL_HEX16(0, Analog_Model_GetChannel(1));
    TEST_ASSERT_EQUAL_HEX16(0, Analog_Model_GetChannel(2));
}

void test_Analog_Model_GetChannel_should_NotCareAboutStaleness (void)
{
    Analog_Model_Init();

    Analog_Model_AddReading(0, 11);
    Analog_Model_AddReading(1, 22);

    TEST_ASSERT_EQUAL_HEX16(11, Analog_Model_GetChannel(0));
    TEST_ASSERT_EQUAL_HEX16(22, Analog_Model_GetChannel(1));
    TEST_ASSERT_EQUAL_HEX16(0, Analog_Model_GetChannel(2));

    Analog_Model_AddReading(1, 222);
    Analog_Model_AddReading(2, 333);

    TEST_ASSERT_EQUAL_HEX16(11, Analog_Model_GetChannel(0));
    TEST_ASSERT_EQUAL_HEX16(222, Analog_Model_GetChannel(1));
    TEST_ASSERT_EQUAL_HEX16(333, Analog_Model_GetChannel(2));

}

#endif // TEST
