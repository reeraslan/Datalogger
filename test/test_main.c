#include "unity.h"
#include "cmock.h"
#include "mock_Executor.h"

#include "main.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_main_should_InitTheDrivers(void)
{
    Executor_Init_Expect();

    Executor_Exec_ExpectAndReturn(1);
    Executor_Exec_ExpectAndReturn(1);
    Executor_Exec_ExpectAndReturn(0);


    TEST_ASSERT_EQUAL(0, TestableMain());
}
