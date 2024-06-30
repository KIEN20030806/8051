#include <at89x51.h>
#define LED0 P2_0
#define LED1 P2_1
#define LED2 P2_2
#define LED3 P2_3
#define LED4 P2_4
#define LED5 P2_5
#define LED6 P2_6
#define LED7 P2_7

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
	P2 = 0xff;
	delay(300);
	while(1)
	{
		LED0=0;
  delay(300);
	LED1=0;
  delay(300);
	LED2=0;
  delay(300);
	LED3=0;
  delay(300);
	LED4=0;
  delay(300);
	LED5=0;
  delay(300);
	LED6=0;
  delay(300);
	LED7=0;
  delay(300);
	LED0=1;
  delay(300);
	LED1=1;
  delay(300);
	LED2=1;
  delay(300);
	LED3=1;
  delay(300);
	LED4=1;
  delay(300);
	LED5=1;
  delay(300);
	LED6=1;
  delay(300);
	LED7=1;
  delay(300);
	}
}