#include <at89x51.h>

void delay(unsigned int
ms)
{
	unsigned int i,j;
	for (i=0;i<ms;i++)
		for (j=0;j<120;j++)
		{}
}
main(void)
{
	P2_0 = P2_1 = P2_2= P2_3 = 1;
	while(1)
	{
		if(P3_0==0)
		{
			P2_0 = ~P2_0;
			delay(1000);
		}
		else if(P3_1==0)
		{
			P2_1 = ~P2_1;
			delay(1000);
		}
		else if(P3_2==0)
		{
			P2_2 = ~P2_2;
			delay(1000);
		}
		else if(P3_3==0)
		{
			P2_3 = ~P2_3;
			delay(1000);
		}
	}
}