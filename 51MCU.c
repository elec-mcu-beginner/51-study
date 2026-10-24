#include<reg51.h>
void Delay_ms(unsigned int t)
{
unsigned int i,j;
for(i=t;i>0;i--)
 {
for(j=100;j>0;j--);
 }	 
}
unsigned char code led_table[] = {
 0xFE,0xFD,0xFB,0xF7,0xEF,0xBF,0x7F
};
void main (void)
{
unsigned char i;
	while(1)
	{
	for(i=0;i<7;i++)
	{
	P2 = led_table[i];
	Delay_ms(400);
	}
	}
}			  