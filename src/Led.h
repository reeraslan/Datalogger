#ifndef LED_H
#define LED_H


typedef enum _LED_ID_T{
    LED0 = 0,
    LED1,
    LED2,
    LED3,
    NUM_LED
}LED_ID_T;

void Led_Init(void);
void Led_Toggle(LED_ID_T id);
void Led_On(LED_ID_T id);
void Led_Off(LED_ID_T id);

#endif // LED_H
