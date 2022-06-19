#include <REGX51.H>
#define but1 P3_0
#define but2 P3_1
unsigned char LED7SEGCA[11] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
unsigned char i;
void Delay_ms (unsigned int t)
{
unsigned int x , y;
	for(x=0;x<t;x++)
	{
		for(y=0;y<125;y++);
	}
}
int main ()
{
while(1){
P2=LED7SEGCA[i];

	if(but1 == 0)
	{if(i < 9)
		{i++;}
		else
		{i=0;}
		while(but1 == 0);
	}
	if(but2 == 0)
	{if(i>0)
		{i--;}
		else
		{i=9;}
	}
	while(but2 == 0);
}
return 0;
}