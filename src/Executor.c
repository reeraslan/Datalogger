#include "Led.h"
#include "Digital.h"
#include "Executor.h"

void Executor_Init(void)
{
    Led_Init();
    Digital_Init();
}

bool Executor_Exec(void)
{
    uint8_t bits = Digital_GetBits();
    if((bits & 0x03) == 0)
        Led_Off(LED0);
    else
        Led_Toggle(LED0);

    if((bits & 0x0C) == 0)
        Led_Off(LED1);
    else
        Led_Toggle(LED1);

    if((bits & 0x30) == 0)
        Led_Off(LED2);
    else
        Led_Toggle(LED2);

    return true;
}