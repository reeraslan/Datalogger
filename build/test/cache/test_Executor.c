#include "src/Executor.h"
#include "build/test/mocks/mock_Digital.h"
#include "build/test/mocks/mock_Led.h"
#include "/home/eren/Desktop/dev/Datalogger/vendor/ceedling/vendor/unity/src/unity.h"








void setUp(void)

{

}



void tearDown(void)

{

}



void test_Executor_Init_ShouldInitAllSubsystems(void)

{

    Led_Init_CMockExpect(19);

    Digital_Init_CMockExpect(20);

    Executor_Init();

}



void test_Executor_Exec_should_AlwaysReturnTrue(void)

{

    Digital_GetBits_CMockIgnoreAndReturn(26, 1);

    Led_Off_CMockIgnore();

    Led_Toggle_CMockIgnore();



    UnityAssertEqualNumber((UNITY_INT)((

   1

   )), (UNITY_INT)((Executor_Exec())), (

   ((void *)0)

   ), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);

}













void test_Executor_Exec_should_ToggleLed0_when_Digital0andDigital1AreHigh(void)

{





    Digital_GetBits_CMockExpectAndReturn(42, 0x03);

    Led_Toggle_CMockExpect(43, LED0);

    Led_Off_CMockExpect(44, LED1);

    Led_Off_CMockExpect(45, LED2);



    Executor_Exec();

}



void test_Executor_Exec_should_ToggleLed0_when_Digital1IsHigh(void)

{





    Digital_GetBits_CMockExpectAndReturn(54, 0x02);

    Led_Toggle_CMockExpect(55, LED0);

    Led_Off_CMockExpect(56, LED1);

    Led_Off_CMockExpect(57, LED2);



    Executor_Exec();

}



void test_Executor_Exec_should_NotToggleLed0_when_Digital0orDigital1AreOff(void)

{





    Digital_GetBits_CMockExpectAndReturn(66, 0x00);

    Led_Off_CMockExpect(67, LED0);

    Led_Off_CMockExpect(68, LED1);

    Led_Off_CMockExpect(69, LED2);



    Executor_Exec();

}





void test_Executor_Exec_should_ToggleLed2_when_Digital2orDigital3AreOn(void)

{





    Digital_GetBits_CMockExpectAndReturn(79, 0x0C);

    Led_Off_CMockExpect(80, LED0);

    Led_Toggle_CMockExpect(81, LED1);

    Led_Off_CMockExpect(82, LED2);



    Executor_Exec();

}



void test_Executor_Exec_should_TurnOff_when_Digital2orDigital3AreOff(void)

{





    Digital_GetBits_CMockExpectAndReturn(91, 0x00);

    Led_Off_CMockExpect(92, LED0);

    Led_Off_CMockExpect(93, LED1);

    Led_Off_CMockExpect(94, LED2);



    Executor_Exec();

}



void test_Executor_Exec_should_ToggleLed2_when_Digital4orDigital5AreOn(void)

{





    Digital_GetBits_CMockExpectAndReturn(103, 0x30);

    Led_Off_CMockExpect(104, LED0);

    Led_Off_CMockExpect(105, LED1);

    Led_Toggle_CMockExpect(106, LED2);



    Executor_Exec();

}



void test_Executor_Exec_should_TurnOffLed2_when_Digital4orDigital5AreOff(void)

{





    Digital_GetBits_CMockExpectAndReturn(115, 0x00);

    Led_Off_CMockExpect(116, LED0);

    Led_Off_CMockExpect(117, LED1);

    Led_Off_CMockExpect(118, LED2);



    Executor_Exec();

}
