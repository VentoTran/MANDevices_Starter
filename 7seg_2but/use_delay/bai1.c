#include <REGX51.H>
#define but1 P1_1
#define but2 P1_7
int dem=0x3F;
void delay(int t)
{
while(t)
{
t--;
}
}
void main(){
char 	matrix[] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F };
P2=dem;
	
	while(1){
	
			if(but1==0){
			delay(100);
				if(but1==1){dem++;}
				if(dem>9) dem=0;
				P2=matrix[dem];
			}
			if(but2==0){
			delay(100);
				if(but2==1){dem--;}
				if(dem<0) dem=9;
				P2=matrix[dem];
			}
		if(but1==0 && but2==0){dem=0;P2=matrix[dem];}
	}
	}