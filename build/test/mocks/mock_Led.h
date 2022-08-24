/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_LED_H
#define _MOCK_LED_H

#include "unity.h"
#include "Led.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_Led_Init(void);
void mock_Led_Destroy(void);
void mock_Led_Verify(void);




#define Led_Init_Ignore() Led_Init_CMockIgnore()
void Led_Init_CMockIgnore(void);
#define Led_Init_StopIgnore() Led_Init_CMockStopIgnore()
void Led_Init_CMockStopIgnore(void);
#define Led_Init_Expect() Led_Init_CMockExpect(__LINE__)
void Led_Init_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_Led_Init_CALLBACK)(int cmock_num_calls);
void Led_Init_AddCallback(CMOCK_Led_Init_CALLBACK Callback);
void Led_Init_Stub(CMOCK_Led_Init_CALLBACK Callback);
#define Led_Init_StubWithCallback Led_Init_Stub
#define Led_Toggle_Ignore() Led_Toggle_CMockIgnore()
void Led_Toggle_CMockIgnore(void);
#define Led_Toggle_StopIgnore() Led_Toggle_CMockStopIgnore()
void Led_Toggle_CMockStopIgnore(void);
#define Led_Toggle_Expect(id) Led_Toggle_CMockExpect(__LINE__, id)
void Led_Toggle_CMockExpect(UNITY_LINE_TYPE cmock_line, LED_ID_T id);
typedef void (* CMOCK_Led_Toggle_CALLBACK)(LED_ID_T id, int cmock_num_calls);
void Led_Toggle_AddCallback(CMOCK_Led_Toggle_CALLBACK Callback);
void Led_Toggle_Stub(CMOCK_Led_Toggle_CALLBACK Callback);
#define Led_Toggle_StubWithCallback Led_Toggle_Stub
#define Led_On_Ignore() Led_On_CMockIgnore()
void Led_On_CMockIgnore(void);
#define Led_On_StopIgnore() Led_On_CMockStopIgnore()
void Led_On_CMockStopIgnore(void);
#define Led_On_Expect(id) Led_On_CMockExpect(__LINE__, id)
void Led_On_CMockExpect(UNITY_LINE_TYPE cmock_line, LED_ID_T id);
typedef void (* CMOCK_Led_On_CALLBACK)(LED_ID_T id, int cmock_num_calls);
void Led_On_AddCallback(CMOCK_Led_On_CALLBACK Callback);
void Led_On_Stub(CMOCK_Led_On_CALLBACK Callback);
#define Led_On_StubWithCallback Led_On_Stub
#define Led_Off_Ignore() Led_Off_CMockIgnore()
void Led_Off_CMockIgnore(void);
#define Led_Off_StopIgnore() Led_Off_CMockStopIgnore()
void Led_Off_CMockStopIgnore(void);
#define Led_Off_Expect(id) Led_Off_CMockExpect(__LINE__, id)
void Led_Off_CMockExpect(UNITY_LINE_TYPE cmock_line, LED_ID_T id);
typedef void (* CMOCK_Led_Off_CALLBACK)(LED_ID_T id, int cmock_num_calls);
void Led_Off_AddCallback(CMOCK_Led_Off_CALLBACK Callback);
void Led_Off_Stub(CMOCK_Led_Off_CALLBACK Callback);
#define Led_Off_StubWithCallback Led_Off_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
