#include"delay.h"

void delay(uchar x)		//@11.0592MHz xms
{
	unsigned char i, j;

	while(x--)
	{
	
	_nop_();
	i = 2;
	j = 199;
	do
	{
		while (--j);
	} while (--i);

}

	}




