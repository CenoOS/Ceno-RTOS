/***************************************************
* Ceno Real-time Operating System  (CenoRTOS)
* version 0.1
* author neroyang
* email nerosoft@outlook.com
* time 2018-11-2 
* 
* Copyright (C) 2018 CenoCloud. All Rights Reserved 
*
* Contract Information：
* https://www.cenocloud.com
****************************************************/

#ifndef __CENO_RTOS_THREAD_H__
#define __CENO_RTOS_THREAD_H__

/* Thread Control Block (TCB) */
typedef struct {
    void *sp; /* stack pointer */
		uint32_t timeout; /*timeout delay counter down*/
		uint8_t prio;/* priority of this thread */
    /* ... other attributes associated with a thread */
} OSThread;

typedef void (*OSThreadHandler)();

void OS_init(void *stkSto, uint32_t stkSize);

/* this function must be called with interrupts DISABLED */ 
void OS_sched(void);

void OS_delay(uint32_t ticks);

void OS_tick(void);

extern void OS_onStartup(void);
extern void OS_onIdle(void);

void OS_run(void);

void OSThread_start(
    OSThread *me,
		uint8_t prio,
    OSThreadHandler threadHandler,
    void *stkSto, uint32_t stkSize);

#endif // __CENO_RTOS_THREAD_H__