#include <reg51.h>
#include <intrins.h>
void delay(unsigned int i)
{
	unsigned int k;
	for(k=0;k<i;k++);
}
void main()
{
	P2=0x7F;
	while(1)
	{
		P2=_cror_(P2,1);
		delay(10000);
	}	
}