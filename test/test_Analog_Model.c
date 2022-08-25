#ifdef TEST

#include "unity.h"

#include "Analog_Model.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Analog_Model_GetChannel_should_Return0_when_ChannelIllegal(void)
{

    TEST_ASSERT_EQUAL_HEX16(0, Analog_GetChannel(ANALOG_NUM_CHANNELS));
}

void test_Analog_Model_GetChannel_should_Return0_when_NoAnalogValueCaptured(void)
{

    Analog_Init();

    TEST_ASSERT_EQUAL_HEX16(0, Analog_GetChannel(0));
    TEST_ASSERT_EQUAL_HEX16(0, Analog_GetChannel(ANALOG_NUM_CHANNELS - 1));
}

//Always left a note for the functions that will need implemenetation and testing later !
void test_Analog_Model_GetChannel_should_ReturnLatestData(void)
{
    TEST_IGNORE_MESSAGE("Need to Iplement !");
}

#endif // TEST
