#include <REGX51.H>
unsigned char so[11]= {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
#define but1 P3_0
#define but2 P3_1
int k, dem1, dem2;
void delay(unsigned int time) // time ms
{
	unsigned int i, j;
	for(i=0; i< time;i++)
	{
		for(j=0;j<125;j++);  //VDK thuc hien dc 1ms = lap trong 125 lan = 8 CK may; 1ms 1MC=1us 12Mhz
	}
}
void tangdan(int giatri1)
{
	for(k=0;k<10;k++)
	{
		P2=so[giatri1];
		delay(50);
	}
}
void giamdan(int giatri2)
{
	for(k=9;k>=0;k--)
	{
		P2=so[giatri2];
		delay(50);
	}
}
void main()
{
	P2=0xFF;
	dem1=0;
	dem2=9;
	while(1)
	{
		while(but1==0)
		{
			tangdan(dem1);
			dem1++;
		if(dem1>9) dem1=0;
		while(but1==0)
		 {
			tangdan(dem1);
		 }
	  }
		while(but2==0)
		{
			giamdan(dem2);
			dem2--;
		if(dem2<0) dem2=9;
		while(but2==0)
		 {
			giamdan(dem2);
		 }
	  }
}
}	