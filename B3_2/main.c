#include <at89x52.h>
unsigned char led[10]={0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};
int n;

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
	P2=0x00;
	n=0;
	P0=led[n];
	while(1)
	{
		if(P3_3==0 && n<9) 
		{
			n++;
			P0=led[n];
			delay(300);
		}
		if(P3_2==0 && n>0) 
		{
			n--;
			P0=led[n];
			delay(300);
		}
	}
}

