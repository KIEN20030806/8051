#include <at89x52.h>
unsigned char led[10]={0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};

void delay(unsigned int
ms)
{
	unsigned int p,k;
	for (p=0;p<ms;p++)
		for (k=0;k<240;k++)
		{}
}

void hienthi(unsigned char hour, unsigned char minute, unsigned char second){
	int n;
		for(n=0; n<60; n++)
				{
				P2=0x00;
				P0= led[second%10];
				delay(1);
				P2=0x04;
				P0= led[second / 10];
				delay(1);
					P2=0x08;
					P0= 0x40;
				delay(1);
					P2=0xC;
					P0= led[minute % 10];
				delay(1);
					P2=0x10;
					P0= led[minute / 10];
				delay(1);
					P2=0x14;
					P0= 0x40;
				delay(1);
					P2=0x18;
					P0= led[hour % 10];
				delay(1);
				P2=0x1C;
					P0= led[hour / 10];
				delay(1);
				}
}

void main() {
	int i,j,k;
   unsigned char hour;
	 unsigned char minute;
	 unsigned char second;
	i=4; 
	j=35; 
	k=0;
	while(1)
	{
	k++;
		if(k==60) 
		{
			k=0;
			j++;
		}
		if(j==60)
		{
			j=0;
			i++;
		}
		if(i==24)
		{
			i=0;
		}
		hienthi(i,j,k);
	}
}
