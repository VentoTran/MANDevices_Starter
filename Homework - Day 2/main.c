#include <REGX52.H>
sbit BtnIn = P3^0;
sbit BtnDe = P3^1;
#define Led P2
void delay(unsigned int time)
{
	unsigned int i,j;
	for(i=0;i<time;i++)
	{
		for(j=0;j<125;j++);
	}	
}	

unsigned char Led7seg[10]={0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8,0x80, 0x90}; 

void main ()
{
	int i=0;
	Led = Led7seg[i];

	while (1)
	{
		flag:
		if(BtnIn ==0){
			delay(20);
			if(BtnIn ==0){
				i++;
				if(i>9){i=0;}
			  Led = Led7seg[i];
				delay(500);
				goto flag;	
			}
		}
		if(BtnDe ==0){
			delay(20);
			if(BtnDe ==0){
				i--;
				if(i<0){i=9;}
			  Led = Led7seg[i];
				delay(500);
				goto flag;	
			}
		}
	}
}
	