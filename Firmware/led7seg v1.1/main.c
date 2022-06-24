/*
Nguoi viet : Nguyen Chien 
Ngay viet  : 22/06/2022
De bai : Bam nut nhan tang led -su dung ic 7447 gia ma BCD
*/
#include <main.h>
#include <..\lib\delay.h>
#define TANG P2_0
#define GIAM P2_1

unsigned char  i  = 0 ;

void main ()
{
   while (1)
	 {
		 if ( TANG == 0 && GIAM == 1)
		 {
			 i++;
			 if (i==10) {i=0;}
			 P1 = i;
			 while ( TANG == 0); // chong hien tuong dinh phim
		 }
		 else if  ( TANG == 1 && GIAM == 0 )
		 {
			 
			 i--;
			 if (i==0) {i=9;}
			 P1 = i;
			 while ( GIAM == 0); // chong hien tuong dinh phim
			 
		 }
		 else {}
		 
	 
	 
	 }





}
