#include <main.h>
#include <lib\delay.h>
#define Led7seg P2
 int i = 0 ;
void  main ()
{
	EX0     = 1;
	EX1     = 1;
	IT0     = 1;
	IT1     = 1; 
	Led7seg = i; 
	EA      = 1; 
	
	
	
   while (1)
	 {
	 
	 }
 }
	
	 void isr_ex0 (void) interrupt 0 //int0 --> up
	 {
	  i++ ;
		if (i>9) i= 0;
		Led7seg = i;
		 
	 }

	  void isr_ex1 (void) interrupt 2
		{
		  i--;
			if (i<0) i= 9;
			Led7seg = i;
		
		}






