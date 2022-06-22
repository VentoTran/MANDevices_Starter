/*
Nguoi viet: Chien Nguyen
Ngay viet: 22/06/2022
De bai : nhan nut tang 1 so tren led 7 thanh
*/
#include <REGX51.H>
#include <..\lib\Delay.h>
#define BTN P2_0

unsigned char  i  = 0 ;
unsigned char  code_7seg[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

void main ()
{	 
   while (1)
   { if (BTN == 0)
		     {  
					  i++;
					  if (i==10) i=0;
				    P3 = code_7seg[i];
					   while (BTN == 0) ; //chong hien tuong dinh phim
				 }
   }
}