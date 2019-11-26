# hello_space
[Myriota Module] The hello_space tutorial example program from 'Send with Lab Mode'

Versions:  
  0.1:  Very basic, prints "Hello, Space!" to the serial monitor via USB when the program is first run  
  0.2:  Uses job scheduling to print to the serial monitor every 5 seconds  
  0.3:  Uses message scheduling to try and send a message every 8 hours, as if it were sending via satellite
  
Important points from this tutorial exercise are the usage of the ScheduleJob and ScheduleMessage functions, as well as
the time_t enumerated type. 
