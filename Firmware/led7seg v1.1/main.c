/*
Nguoi viet : Nguyen Chien 
Ngay viet  : 22/06/2022
De bai : Bam nut nhan tang led -su dung ic 7447
*/

#include <main.h>
#include <..\lib\delay.h>
#define BTN P2_0


unsigned char  i  = 0 ;


void main ()
{
   while (1)
	 {
		 if (BTN== 0)
		 {
			 i++;
			 if (i==10) {i=0;}
			 P1 = i;
			 while (BTN == 0); // chong hien tuong dinh phim
			 
		 
		 }
	 
	 
	 }





}
