#include <at89x52.h>
unsigned char led[10]={0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};
int i,j,n;

void delay(unsigned int
ms)
{
	unsigned int p,k;
	for (p=0;p<ms;p++)
		for (k=0;k<120;k++)
		{}
}

void main()
{
	while(1)
	{
		for(j=0; j<=9; j++)
		{
		for(i=0; i<=9; i++)
			{
				for(n=0; n<20; n++)
				{
				P2=0x04;
				P0= led[j];
				delay(5);
				P2=0x00;
				P0= led[i];
				delay(5);
				}
			}
		}
	}
}