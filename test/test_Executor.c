#ifdef TEST

#include "unity.h"
#include "mock_Led.h"
#include "mock_Digital.h"
#include "mock_Analog_Conductor.h"
#include "mock_Analog_Model.h"

#include "Executor.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Executor_Init_ShouldInitAllSubsystems(void)
{
    Led_Init_Expect();
    Digital_Init_Expect();
    Analog_Conductor_Init_Expect();

    Executor_Init();
}

void test_Executor_Exec_should_AlwaysReturnTrue(void)
{
    Digital_GetBits_IgnoreAndReturn(1);
    Led_Off_Ignore();
    Led_Toggle_Ignore();

    TEST_ASSERT_EQUAL(true, Executor_Exec());
}

#endif // TEST

// * D0 && D1 Tests


void test_Executor_Exec_should_ToggleLed0_when_Digital0andDigital1AreHigh(void)
{
    // We are expecting that Digital_GetBits is going to get called and we are specifying that it will return 1
    // Injecting data into our Test case
    Digital_GetBits_ExpectAndReturn(0x03);
    Led_Toggle_Expect(LED0);
    Led_Off_Expect(LED1);
    Led_Off_Expect(LED2);

    Executor_Exec();
}

void test_Executor_Exec_should_ToggleLed0_when_Digital1IsHigh(void)
{
    // We are expecting that Digital_GetBits is going to get called and we are specifying that it will return 1
    // Injecting data into our Test case
    Digital_GetBits_ExpectAndReturn(0x02);
    Led_Toggle_Expect(LED0);
    Led_Off_Expect(LED1);
    Led_Off_Expect(LED2);

    Executor_Exec();
}

void test_Executor_Exec_should_NotToggleLed0_when_Digital0orDigital1AreOff(void)
{
    // We are expecting that Digital_GetBits is going to get called and we are specifying that it will return 1
    // Injecting data into our Test case
    Digital_GetBits_ExpectAndReturn(0x00);
    Led_Off_Expect(LED0);
    Led_Off_Expect(LED1);
    Led_Off_Expect(LED2);

    Executor_Exec();
}

// * D2 && D3 Tests
void test_Executor_Exec_should_ToggleLed2_when_Digital2orDigital3AreOn(void)
{
    // We are expecting that Digital_GetBits is going to get called and we are specifying that it will return 1
    // Injecting data into our Test case
    Digital_GetBits_ExpectAndReturn(0x0C);
    Led_Off_Expect(LED0);
    Led_Toggle_Expect(LED1);
    Led_Off_Expect(LED2);

    Executor_Exec();
}

void test_Executor_Exec_should_TurnOff_when_Digital2orDigital3AreOff(void)
{
    // We are expecting that Digital_GetBits is going to get called and we are specifying that it will return 1
    // Injecting data into our Test case
    Digital_GetBits_ExpectAndReturn(0x00);
    Led_Off_Expect(LED0);
    Led_Off_Expect(LED1);
    Led_Off_Expect(LED2);

    Executor_Exec();
}
// * D4 && D5 Tests
void test_Executor_Exec_should_ToggleLed2_when_Digital4orDigital5AreOn(void)
{
    // We are expecting that Digital_GetBits is going to get called and we are specifying that it will return 1
    // Injecting data into our Test case
    Digital_GetBits_ExpectAndReturn(0x30);
    Led_Off_Expect(LED0);
    Led_Off_Expect(LED1);
    Led_Toggle_Expect(LED2);

    Executor_Exec();
}

void test_Executor_Exec_should_TurnOffLed2_when_Digital4orDigital5AreOff(void)
{
    // We are expecting that Digital_GetBits is going to get called and we are specifying that it will return 1
    // Injecting data into our Test case
    Digital_GetBits_ExpectAndReturn(0x00);
    Led_Off_Expect(LED0);
    Led_Off_Expect(LED1);
    Led_Off_Expect(LED2);

    Executor_Exec();
}

// void test_Executor_Exec_should_TurnOnLEDs_when_FirstofPairGreaterThanSecondOfPair(void)
// {
//     Analog_Conductor_Init_Expect();

//     Analog_Model_GetChannel_ExpectAndReturn(0, 101);
//     Analog_Model_GetChannel_ExpectAndReturn(1, 100);
//     Led_On_Expect(LED0);

//     Analog_Model_GetChannel_ExpectAndReturn(2, 1);
//     Analog_Model_GetChannel_ExpectAndReturn(3, 0);
//     Led_On_Expect(LED1);


//     Analog_Model_GetChannel_ExpectAndReturn(4, 0x800);
//     Analog_Model_GetChannel_ExpectAndReturn(5, 0x700);
//     Led_On_Expect(LED2);

//     Executor_Exec();

// }













