/********************************************************************************
*			Myriota Module Application				*
*										*
* Application name:	hello_space						*			
* Filename:		main.c							*
* Date:			26 November 2019					*
* File Version:		0.2							*	
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
* Description:	Prints 'Hello, Space!' in the serial monitor once every 5 secs	*
*	[detailed description]							*
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
   printf("Hello, Space!\n");
return SecondsFromNow(5); //time_t SecondsFromNow(unsigned Secs)
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

