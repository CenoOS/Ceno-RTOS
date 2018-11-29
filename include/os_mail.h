/***************************************************
* Ceno Real-time Operating System  (CenoRTOS)
* version 0.1
* author neroyang
* email nerosoft@outlook.com
* time 2018-11-29
* 
* Copyright (C) 2018 CenoCloud. All Rights Reserved 
*
* Contract Information：
* https://www.cenocloud.com
****************************************************/


#ifndef __CENO_RTOS_MAIL_H__
#define __CENO_RTOS_MAIL_H__


typedef struct{
    uint32_t count;
} OSMailBox;

void OSMail_create();

void OSMail_post();

void OSMail_accept();

#endif // __CENO_RTOS_MAIL_H__