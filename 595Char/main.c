#include<reg51.h>
#include<intrins.h>

sbit SRCLK=P3^6;
sbit RCLK=P3^5;
sbit SER=P3^4;

//--定义要使用的IO口--//
#define COMMONPORTS		P0

//--列选通控制--//
unsigned char code TAB[8]  = {0x7f,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0xfe};

//--点阵字码--//
unsigned char code CHARCODE[18][8]=
{

{0x00,0x00,0x3e,0x41,0x41,0x41,0x3e,0x00}, 

{0x00,0x00,0x00,0x00,0x21,0x7f,0x01,0x00}, 

{0x00,0x00,0x27,0x45,0x45,0x45,0x39,0x00}, 

{0x00,0x00,0x22,0x49,0x49,0x49,0x36,0x00}, 

{0x00,0x00,0x0c,0x14,0x24,0x7f,0x04,0x00}, 

{0x00,0x00,0x72,0x51,0x51,0x51,0x4e,0x00}, 

{0x00,0x00,0x3e,0x49,0x49,0x49,0x26,0x00}, 

{0x00,0x00,0x40,0x40,0x40,0x4f,0x70,0x00}, 

{0x00,0x00,0x36,0x49,0x49,0x49,0x36,0x00}, 

{0x00,0x00,0x32,0x49,0x49,0x49,0x3e,0x00}, 

{0x00,0x00,0x7F,0x48,0x48,0x30,0x00,0x00}, 

{0x00,0x00,0x7F,0x48,0x4C,0x73,0x00,0x00}, 

{0x00,0x00,0x7F,0x49,0x49,0x49,0x00,0x00}, 

{0x00,0x00,0x3E,0x41,0x41,0x62,0x00,0x00}, 

{0x00,0x00,0x7F,0x08,0x08,0x7F,0x00,0x00}, 

{0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00}, 

{0x00,0x7F,0x10,0x08,0x04,0x7F,0x00,0x00}, 

{0x7C,0x48,0x48,0xFF,0x48,0x48,0x7C,0x00}  

};
void delay(unsigned int time)
{
  unsigned int i,j;
  for(i=0;i<time;i++)
    for(j=0;j<121;j++);
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

void main()
{	
 	unsigned char tab, j;
	unsigned int  i;

	while(1)
	{	
		for(i= 0; i<50; i++ )   
		{
			for(tab=0;tab<8;tab++)
			{	

				Hc595SendByte(0x00);			    														
				COMMONPORTS	= TAB[tab];				 
				Hc595SendByte(CHARCODE[j][tab]);	
				delay(2);		
			}
			 
		}
		j++;
		if(j == 18)
		{
			j = 0;
		}
	}	
}
