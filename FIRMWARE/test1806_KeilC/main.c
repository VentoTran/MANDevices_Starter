  //Hien thi Led 7 thanh tu 0 den 9
#include <REGX52.H>
#define button_1 P1_0
#define button_2 P1_4
char segcode[] ={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void delay_ms(unsigned int t) {
   unsigned int i,j;
	 for (i=0;i<t;i++) {
	   for (j=0;j<123;j++) { 
		 }
	 }
}

int main() {
	 int i=0;
	 while(1) {
		 if (button_1==0&&button_2!=0) {
			 while(button_2!=0) {
				 if (i>9) i=0;
				 P2=segcode[i];
				delay_ms(1000);
				 i++;
				 if (i>9) i=0;
			 }
	 }
		 if (button_2==0&&button_1!=0) {
		 while(button_1!=0) {
			 if ((i-2)<0) i=2;
			 P2=segcode[i-2];
			 delay_ms(1000);
			 i--;
			 if (i<2) i=11;
		 }
 }
}
	 return 0;
}