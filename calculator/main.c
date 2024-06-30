#include <at89x52.h>
int led[14]={0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f, 0x39,0x70,0x40,0x40};
int m,s,o,r,key;
int keypad[4][4]={{0,1100,1200,1300},
									{1,2,3,10},
									{4,5,6,10},
									{7,8,9,10},
									};

void delay(unsigned int
ms)
{
	unsigned int p,k;
	for (p=0;p<ms;p++)
		for (k=0;k<120;k++)
		{}
}

int quetphim()
{
int c, r;
P1=0x0F;
delay(2);
	if(P1!=0x0F)   
	{
		for(r=0;r<4;r++)                    
		{
			P1=~(0x01<<(4+r));
			delay(1);
			for(c=0;c<4;c++)         
			{
				if((P1&(0x01<<c))==0)
				{
					while((P1&(0x01<<c))==0) {};
						P1=0x0F;
					return keypad[r][3-c]; 
			}
			}
		}
	}
P1=0x0F;
	return 1400;
}

void hienthi(int j){
	if(j<100){
		P2=0x00;
		P0= led[j%10];
		delay(5);
		if(j>9)
		{
		P2=0x04;
		P0= led[j/10];
		delay(5);
		}
	}
	else if(j==1100)
	{
		P2=0x00;
		P0= led[11];
		delay(5);
		P2=0x04;
		P0= led[12];
		delay(5);
	}
	else if(j==1200)
	{
		P2=0x00;
		P0= led[12];
		delay(5);
	}
}

void main(){
	int z=0;
	 m=0;s=0; o=0;
	while(1){
		key=quetphim();
			if (key<1400)
			{
				if(key == 1300) 
				{
					if(z==0)
						s=s+o;
					else 
						s=s-o;
					while(P1==0x0F)
					{
						hienthi(s);
					}
					o=0;
				}
				else if(key<10) 
				{
					o=o*10+key;
					while(P1==0x0F)
					{
						hienthi(o);
					}
				}
				else if (key==1100) 
				{
					while(P1==0x0F)
					{
						hienthi(key);
					}
					s=s+o;
					z=0;
					o=0;
				}
				else if (key==1200) 
				{
						while(P1==0x0F)
					{
						hienthi(key);
					}
					s=s+o;
					z=1;
					o=0;
				}
			}
	}
}