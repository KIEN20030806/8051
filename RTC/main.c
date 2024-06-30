#include <at89x52.h>
#ifndef __DS1302__
#define __DS1302__

#define low   0
#define high  1

#define DS1302_SCK P3_6
#define DS1302_IO  P3_4
#define DS1302_RST P3_5

#define DS1302_ADDR_YEAR     0x8C
#define DS1302_ADDR_WEEK     0x8A
#define DS1302_ADDR_MONTH    0x88
#define DS1302_ADDR_DAY      0x86
#define DS1302_ADDR_HOUR     0x84
#define DS1302_ADDR_MINUTE   0x82
#define DS1302_ADDR_SECOND   0x80
unsigned char led[11]={0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f, 0x00};
unsigned int count = 0; 
unsigned int check = 1, it=1, j=0, k=0, m=0, n=0, q=0;

typedef struct __DS1302_DATE_TIME__
{
  unsigned char year;
  unsigned char week;
  unsigned char month;
  unsigned char day;
  unsigned char hour;
  unsigned char minute;
  unsigned char second;
} ds1302_Datetime;

unsigned char to_bcd(unsigned char val)
{
  return ((val / 10) << 4 | (val % 10));
}

unsigned char from_bcd(unsigned char bcd)
{
  return ((bcd&0x70)>>4)*10 + (bcd&0x0F);
}

void ds1302_write(unsigned char dat)
{
  unsigned char i;
  for(i=0; i<8; i++)
  {
    DS1302_SCK = low;
    DS1302_IO = dat & 0x01;
    dat >>= 1;
    DS1302_SCK = high;
  }
}

void ds1302_write_to_addr(unsigned char addr, unsigned char dat)
{
  DS1302_RST = low;
  DS1302_SCK = low;
  DS1302_RST = high;
  ds1302_write(addr);
  ds1302_write(dat);
  // ??
  DS1302_RST = low;
  DS1302_IO = high;
  DS1302_SCK = high;
}

unsigned char ds1302_read_from_addr(unsigned char addr)
{
  unsigned char i, value = 0;
  DS1302_RST = low;
  DS1302_SCK = low;
  DS1302_RST = high;
  ds1302_write(addr);
  for(i=0; i<8; i++)
  {
    DS1302_SCK = low;
    value >>= 1;
    if(DS1302_IO)
      value |= 0x80;
    DS1302_SCK = high;
  }
  DS1302_RST = low;
  DS1302_IO = high;
  DS1302_SCK = high;
  return value;
}

void ds1302_set_datetime(ds1302_Datetime datetime)
{
  ds1302_write_to_addr(0x8E, 0x00);
  ds1302_write_to_addr(DS1302_ADDR_YEAR, to_bcd(datetime.year));
  ds1302_write_to_addr(DS1302_ADDR_WEEK, to_bcd(datetime.week));
  ds1302_write_to_addr(DS1302_ADDR_MONTH, to_bcd(datetime.month));
  ds1302_write_to_addr(DS1302_ADDR_DAY, to_bcd(datetime.day));
  ds1302_write_to_addr(DS1302_ADDR_HOUR, to_bcd(datetime.hour));
  ds1302_write_to_addr(DS1302_ADDR_MINUTE, to_bcd(datetime.minute));
  ds1302_write_to_addr(DS1302_ADDR_SECOND, to_bcd(datetime.second));
  ds1302_write_to_addr(0x8E, 0x10);
}

void ds1302_get_datetime(ds1302_Datetime datetime)
{
  datetime.year   = from_bcd(ds1302_read_from_addr(DS1302_ADDR_YEAR | 0x01));
  datetime.week   = from_bcd(ds1302_read_from_addr(DS1302_ADDR_WEEK | 0x01));
  datetime.month  = from_bcd(ds1302_read_from_addr(DS1302_ADDR_MONTH | 0x01));
  datetime.day    = from_bcd(ds1302_read_from_addr(DS1302_ADDR_DAY | 0x01));
  datetime.hour   = from_bcd(ds1302_read_from_addr(DS1302_ADDR_HOUR | 0x01));
  datetime.minute = from_bcd(ds1302_read_from_addr(DS1302_ADDR_MINUTE | 0x01));
  datetime.second = from_bcd(ds1302_read_from_addr(DS1302_ADDR_SECOND | 0x01));
}
void delay(unsigned int ms)
{
	unsigned int p,k;
	for (p=0;p<ms;p++)
		for (k=0;k<10;k++)
		{}
}

void hienthi(unsigned char a, unsigned char b, unsigned char c){
	int n;
		for(n=0; n<60; n++)
				{
				P2=0x00;
				P0= led[c%10];
				delay(1);
				P2=0x04;
				P0= led[c / 10];
				delay(1);
					P2=0x08;
					P0= 0x40;
				delay(1);
					P2=0xC;
					P0= led[b % 10];
				delay(1);
					P2=0x10;
					P0= led[b / 10];
				delay(1);
					P2=0x14;
					P0= 0x40;
				delay(1);
					P2=0x18;
					P0= led[a % 10];
				delay(1);
				P2=0x1C;
					P0= led[a / 10];
				delay(1);
				}
}
ds1302_Datetime myDatetime;
void timer0_isr(void) interrupt 1
{
    count++; // Tang bi?n d?m khi ng?t Timer 0 x?y ra

    if (count >= 61) // 2 ng?t x?y ra m?i giây (1 giây / 250ms = 4)
    {
        count = 0; // Ð?t l?i bi?n d?m
			check=1-check;
    }
}

void external_interrupt() interrupt 0 // X? lý ng?t ngo?i INT0
{
    hienthi(myDatetime.hour, myDatetime.minute, myDatetime.second);	
		m=1; n=0; q=0;
}
void external_interrupt1() interrupt 2 // X? lý ng?t ngo?i INT0
{
    hienthi(myDatetime.day, myDatetime.month, myDatetime.year);
		n=1; m=0; q=0;
}

void main()
{
	 ds1302_Datetime Datestime;
	ds1302_Datetime myDatetime;
		Datestime.year = 23;
	Datestime.month = 10;
	Datestime.day = 2;
	Datestime.hour = 12;
	Datestime.minute = 56;
	Datestime.second = 12;
 ds1302_set_datetime(Datestime);
	 TMOD = 0x01; // Ch? d? 16-bit cho Timer 0
   TH0 = 0 ;      // Giá tr? cho TH0
	 TL0 = 0 ;  

    ET0 = 1;     // Cho phép ng?t Timer 0
    EA = 1;      // Cho phép ng?t t?ng quát

    TR0 = 1;     // Kh?i d?ng Timer 0
		EA = 1;     // B?t bit EA (Interrupt Enable All)
		EX0 = 1;
    IT0 = 0;
		EX1 = 1;
    IT1 = 0;
	while(1)
	{
		ds1302_get_datetime(myDatetime);
		hienthi(myDatetime.hour, myDatetime.minute, myDatetime.second);
	}
}