#include <at89x52.h>
#include <XPT2046.c>


unsigned long int bitMask=0,newKey=0;
unsigned char tVal;
unsigned char ticks=0;
char pulseCnt=0;
int key=0, t=0;
float light = 0;
unsigned int ain2 = 0x0000;                                                                                                                                                                                                                                                                                                                                                                          

sbit LED1 = P2^0;
sbit LED2 = P2^1;
sbit LED3 = P2^2;

#define RL                                            100.0
#define LDR_Constant                                500000.0
#define VDD_in_mV                                   5000.0
#define ADC_count_max                               4095.0

#define POWER 	0xFFA25D
#define RESET 	0xFF629D
#define MODE 		0xFFE21D
#define CH_MIN	0xFF22DD
#define CH_PLS	0xFF02FD
#define PREV		0xFFE01F
#define NEXT		0xFFA857
#define EQ			0xFFC23D
#define VOL_M		0xFF6897
#define VOL_P		0xFF9867
#define PLAY		0xFF906F
#define ZERO		0xFFB04F
#define ONE			0xFF30CF
#define TWO			0xFF18E7
#define THREE		0xFF7A85
#define FOUR		0xFF10EF
#define FIVE		0xFF38C7
#define SIX			0xFF5AA5
#define SEVEN		0xFF42BD
#define EIGHT		0xFF4AB5
#define NINE		0xFF52AD

int keypad[2][4]={{1,2,3,4},
									{5,6,7,8}
									};

void delay(unsigned int ms)
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
		for(r=0;r<2;r++)                    
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
	return 0;
}

void timer0_ISR() interrupt 1
{
    if(ticks<50){
        ticks++;
		}
		
    TH0 = 0xFC;   /*Reload Timer Values for 1ms*/
    TL0 = 0x67;
}


void INT0_ISR()  interrupt 0
{
    tVal = ticks;
    ticks = 0;

    TH0 = 0xFC;  /*Reload Timer Values for 1ms*/
    TL0 = 0x67;

    pulseCnt++;

    if((tVal>=50)) /*Pulse width greater than 50ms signifies Start of Frame*/
    { 
        pulseCnt = -2; /*Skip first 2 counts*/
        bitMask = 0;
    }
    else if((pulseCnt>=0) && (pulseCnt<32)) 
    {  
			/* Accumulate 32 bit data */
        if(tVal>=2)            
        {
            bitMask |=(unsigned long int)1<<(31-pulseCnt);
        }

    }
    else if(pulseCnt>=32)          /*End of Frame*/
    {
        newKey = bitMask;      
        pulseCnt = 0;
    }
}


void timerInit (void)
{
	  TMOD |= 0x01;  /* Timer 0 Mode 1 */
    TH0 = 0xFC;    /* Reload Value for 1ms for AT89S52*/
    TL0 = 0x67;
    TR0 = 1;       /*Start Timer*/
    ET0 = 1;       /*Enable Timer Interrupt*/
    
    IT0 = 1;       /*Int0 Falling Edge Interrupt*/
    EX0 = 1;       /*Enable INT0 Interrupt*/
    
    EA  = 1;       /*Enable Global Interrupts*/
}


void main()
{		
	timerInit();
    while(1)
    {
			key = quetphim();
        if(newKey!=0 || key!=0 )		
        {  
						if(newKey == ONE || key==1){
							P2=0x1c;
							P0=0x06;
						}
						else if(newKey == TWO || key==2){
							P2=0x18;
							P0=0x5b;
						}
						else if(newKey == THREE || key==3)
						{
							P2=0x14;
							P0=0x4f;
						}
						else if(newKey == FOUR || key==4)
						{
							P2=0x10;
							P0=0x66;
						}
						else if(newKey == FIVE || key==5)
						{
							P2=0x0c;
								P0=0x6D;
						}
						else if(newKey == SIX || key==6)
						{
							P2=0x08;
								P0=0x7d;
						}
						else if(newKey == SEVEN || key==7)
						{
							P2=0x04;
								P0=0x07;
						}
						else if(newKey == EIGHT || key==8)
						{
							P2=0x00;
								P0=0x7f;
						}
            newKey = 0;	
						key=0;
						t=1;
        }
				ain2 = XPT2046_read_ADC(ch2, (ADC_res_12 | single_ended_ADC | power_down_between_conversions_IRQ_enabled));
				light = ain2;
         if(light<50)
					 {
						 P2=0x00;
						 t=0;
					 }
					 else if(t==0)
					{
						P2=0xff;
					}
    }		
}	  