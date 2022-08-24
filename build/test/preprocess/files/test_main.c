#include "src/main.h"
#include "build/test/mocks/mock_Executor.h"
#include "/home/eren/Desktop/dev/Datalogger/vendor/ceedling/vendor/cmock/src/cmock.h"
#include "/home/eren/Desktop/dev/Datalogger/vendor/ceedling/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_main_should_InitTheDrivers(void)

{

    Executor_Init_CMockExpect(17);



    Executor_Exec_CMockExpectAndReturn(19, 1);

    Executor_Exec_CMockExpectAndReturn(20, 1);

    Executor_Exec_CMockExpectAndReturn(21, 0);





    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((TestableMain())), (

   ((void *)0)

   ), (UNITY_UINT)(24), UNITY_DISPLAY_STYLE_INT);

}
