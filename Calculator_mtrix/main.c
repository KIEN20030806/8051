#include <REG51.h>
#include<intrins.h>
#define COMMONPORTS		P0
sbit SRCLK=P3^6;
sbit RCLK=P3^5;
sbit SER=P3^4;
unsigned char code TAB[8]  = {0x7f,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0xfe};
unsigned char code CHARCODE[10][4]=
{
{0x00,0x7E,0x42,0x7E},
{0x00,0x00,0x00,0x7E},
{0x00,0x5E,0x52,0x72},
{0x00,0x52,0x52,0x7E},
{0x00,0x70,0x10,0x7E},
{0x00,0x72,0x52,0x5E},
{0x00,0x7E,0x52,0x5E},
{0x00,0x40,0x40,0x7E},
{0x00,0x7E,0x52,0x7E},
{0x00,0x72,0x52,0x7E},
};
unsigned char code CHARCODE1[3][8]=
{
	{0x00,0x00,0x08,0x08,0x3E,0x08,0x08,0x00},
	{0x00,0x00,0x08,0x08,0x08,0x08,0x00,0x00},
	{0x00,0x00,0x14,0x14,0x14,0x14,0x00,0x00},
};
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
		for (k=0;k<121;k++)
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

void Hc595SendByte(unsigned char dat)
{
	unsigned char a;
	SRCLK=0;
	RCLK=0;
	for(a=0;a<8;a++)
	{
		SER=dat>>7;
		dat<<=1;

		SRCLK=1;
		_nop_();
		_nop_();
		SRCLK=0;	
	}

	RCLK=1;
	_nop_();
	_nop_();
	RCLK=0;
}

void hienthi(int j){
	unsigned char tab;
	unsigned int  i;
	if(j<100)
	{
		for(i= 0; i<10; i++ )   
		{
			for(tab=0;tab<4;tab++)
			{	
				Hc595SendByte(0x00);			     														
				COMMONPORTS	= TAB[tab];			
				Hc595SendByte(CHARCODE[j/10][tab]);	
				delay(1);		
			}
			for(tab=0;tab<4;tab++)
			{	

				Hc595SendByte(0x00);			     														
				COMMONPORTS	= TAB[tab+4];			
				Hc595SendByte(CHARCODE[j%10][tab]);	
				delay(1);		
			}
	}
}
	else if(j>1000) 
	{
		j=j/100-11;
		for(i= 0; i<30; i++ )   
		{
			for(tab=0;tab<8;tab++)
			{	

				Hc595SendByte(0x00);			     														
				COMMONPORTS	= TAB[7-tab];			
				Hc595SendByte(CHARCODE1[j][tab]);	
				delay(1);		
			}
		}
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