#include <at89x52.h>
#include <intrins.h>
#include <stdlib.h>
#define uchar unsigned char
#define uint unsigned int
#define COMMONPORTS		P0
sbit SRCLK1=P3^6;
sbit RCLK1=P3^5;
sbit SER=P3^4;
unsigned char code TAB[8]  = {0x7f,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0xfe};
unsigned char CHARCODE1[8];
uchar xfood_position=0;
uchar yfood_position=0;
uchar snake_length = 2; 
uchar xsnake[20]; // Bi?u di?n ma tr?n 8x8
uchar ysnake[20];
uchar nut=1;
uchar t=1;

void delay(uint time) {
    uint i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 120; j++);
}

int quetphim()
{
int c, r;
P1=0x0F;
delay(1);
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
					while((P1&(0x01<<c))==0) {}
						P1=0x0F;
					if (c==2 && r==3)
					{
					return 4;
					}
					else 
						if (c==3 && r==2)
					{
					return 3;
					}
					else 
						if (c==1 && r==2)
					{
					return 1;
					}
					else 
						if (c==2 && r==1)
					{
					return 2;
					}
					else
					{
						return 0;
					}
			}
			}
		}
	}
P1=0x0F;
	return 0;
}

void Hc595SendByte(unsigned char dat)
{
	unsigned char a;
	SRCLK1=0;
	RCLK1=0;
	for(a=0;a<8;a++)
	{
		SER=dat>>7;
		dat<<=1;

		SRCLK1=1;
		_nop_();
		_nop_();
		SRCLK1=0;	
	}

	RCLK1=1;
	_nop_();
	_nop_();
	RCLK1=0;
}

void display() {
    uchar i,j,tg, tab,dem;
	dem=0;
	for (i=0; i<8; i++)
	{
		CHARCODE1[i]=0x00;
		for(j=0; j<=snake_length-1; j++)
		{
			if(xsnake[j]==i)
			{
					tg=0x01<<(7-ysnake[j]);
					CHARCODE1[i]=CHARCODE1[i] | tg;
			}
		}
		if(xfood_position==i)
			{
					tg=0x01<<(7-yfood_position);
					CHARCODE1[i]=CHARCODE1[i] | tg;
			}
}
	for(i= 0; i<10; i++ )   
		{
			for(tab=0;tab<8;tab++)
			{	
				Hc595SendByte(0x00);			     														
				COMMONPORTS	= TAB[tab];			
				Hc595SendByte(CHARCODE1[tab]);	
				delay(1);		
			}
		}
}

void generateFood() {
    xfood_position = rand() % 8;
		yfood_position = rand() % 8;
}

void updateSnake() {
    uchar i;
    for (i = (snake_length-1); i > 0; i--) {
        xsnake[i] = xsnake[i - 1];
				ysnake[i] = ysnake[i - 1];
		}
    if (nut == 1 ) {
    xsnake[0] = xsnake[0] + 1;
			if(xsnake[0]==8)
			{
				xsnake[0]=0;
			}
		} 
		else if (nut == 2 ) {
				ysnake[0] = ysnake[0] + 1;
			if(ysnake[0]==8)
			{
				ysnake[0]=0;
			}
		} 
		else if (nut == 3) {
			if(xsnake[0]==0)
			{
				xsnake[0]=7;
			}
			else
			{
				xsnake[0] = xsnake[0] - 1;
			}
		} 
		else if (nut == 4 ) {
			if(ysnake[0]==0)
			{
				ysnake[0]=7;
			}
			else
			{
				ysnake[0] = ysnake[0] - 1;
			}
		} 
    }

bit checkCollision() {
    uchar i;
    for (i = 1; i < snake_length; i++) {
        if (xsnake[0] == xsnake[i] && ysnake[0] == ysnake[i]) {
            return 1; // Collision detected
        }
    }
    return 0; // No collision
}

void main() {
	uchar i,j;
	j=1;
	  xsnake[0]=1;
	  ysnake[0]=0;
	xsnake[1]=0;
	  ysnake[1]=0;
	for ( i = 1; i < 20; i++) {
        xsnake[i] = 10;
				ysnake[i] = 10;
    }
    generateFood();
    while(1) {
			j=quetphim();
			if (j>0 && j!=t+2 && j!=t-2)
			{
				t=j;
			}
			else
			{
				nut=t;
			}
        updateSnake();
        if (checkCollision()) {
            // Game over
            break;
        }
        if (xsnake[0] == xfood_position && ysnake[0] == yfood_position) {
            // Snake ate the food
            generateFood();
            snake_length++;
						updateSnake();
        }
        for (i=0; i<2; i++)
				{
        display();
				}
    }
}
