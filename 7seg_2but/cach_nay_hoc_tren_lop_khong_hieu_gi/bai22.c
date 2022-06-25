#include <REGX51.H>
#define led7seg P2
int index=0;
void main(){
	EX0 = 1;
	EX1 = 1;
	IT1 = 1;
	IT0 = 1;
	EA = 1;
	while(1){
	
	}
}	void isr_ex0 (void) interrupt 0 // INT0 .>> UP
	{
	index++;
		if(index>9) index=0;
		led7seg = index;
	}
	void isr_ex1 (void) interrupt 2 // INT1 >> DOWN
	{
	index--;
		if(index<0) index=9;
		led7seg = index;
	}


