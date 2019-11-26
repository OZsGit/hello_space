/********************************************************************************
*			Myriota Module Application				*
*										*
* Application name:	hello_space						*			
* Filename:		main.c							*
* Date:			26 November 2019					*
* File Version:		0.3							*	
*										*		
* Author:		Ole Zhang						*
* Company:		Odyssey Geophysics					*
*										*
*********************************************************************************
*										*
* [space left empty] 								*
*										*
*********************************************************************************
*										*
* Description:	Sends the message "Hello, Space!" every 8 hours 		*
*	Attempts to send a predefined message every 8 hours unless the		*
*	message queue is overloaded, in which case it will print out		*
*	"Overloaded" in the serial monitor.					*
*										*				
*********************************************************************************
*										*
* Pin assignments:								*
*	[none]									*
*										*
*										*
********************************************************************************/
#include "myriota_user_api.h"

time_t HelloSpace() { //the Job, called HelloSpace()
    const char message[] = "Hello, Space!";
    if(ScheduleMessage((uint8_t *)message, sizeof(message)) > 1)
	printf("Overloaded\n");
    return HoursFromNow(8);
}

void AppInit() {
    ScheduleJob(HelloSpace, ASAP()); 
	/*time_t ScheduleJob (ScheduledJob Job, time_t Time)
	ScheduleJob has two arguments: 
		Job: a task to perform. It has the signature:
			typedef time_t(* ScheduledJob )(void)
				returns a value which is of type time_t, when the job should next run (after completing this one)
		Time: an enum, type time_t. In this case ASAP(void) is as soon as possible	
	*/
}

