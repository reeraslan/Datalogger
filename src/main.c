#include "Executor.h"
#include "main.h"

#ifndef TEST
int main(void)
#else
#endif
int TestableMain(void)
{
    Executor_Init();

    while(Executor_Exec());
    return 0;
}