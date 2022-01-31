#include<reg51.h>
void delay()
{
	int i,j;
	for(i=0;i<10;i++)
		for(j=0;j<100;j++);
	
}

sbit LED = P2^0;

void main()
{
	while(1)
	{
		LED = 1;
		delay();
		LED = 0;
		delay();
	}
}