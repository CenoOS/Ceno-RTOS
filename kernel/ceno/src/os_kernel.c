/**
 *	Ceno RTOS task 
 * 	
 * 2018-12-17 
 * neroyang
 * 
 * Copyright (C) 2018 CenoCloud. All Rights Reserved 
 *
 * Contract Information：
 * nerosoft@outlook.com
 * https://www.cenocloud.com
 */
#include "../include/os_api.h"


os_err_t os_init(void){

	// test init
	 	(*((volatile unsigned long *)0x400FE108)) |= 0x20;
      	(*((volatile unsigned long *)0x40025400)) |= 0x0000000E;
    	(*((volatile unsigned long *)0x4002551C)) |= 0x0000000E;
    	(*((volatile unsigned long *)0x40025038)) = 0;
    	(*((volatile unsigned long *)0x40025038)) |= 0x04;

	os_err_t isOsObjectContainerInit = os_obj_container_init();
	if(isOsObjectContainerInit==OS_ERR){
		return isOsObjectContainerInit;
	}
}

os_err_t os_run(void){

}

os_err_t os_idle(void){

}

os_err_t os_tick(void){

}

os_err_t os_sched(void){
	
}
