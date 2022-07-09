#include <main.h>
#include <..\lib\delay.h>
#define LED P2_0

void delay_tmr(void) //50ms
{
 TMOD = 00000001 ;
 TH0 = 0x3C;
 TL0 = 0xAF	;
 TR0 = 1;
	while ( !TF0 ) ;
	TR0 = 0;
	TF0 = 0;
 

}

void main ()
{
	LED = 0 ;

 while (1)
 {
  LED = ! LED ;
	 delay_tmr();
 
 }



}