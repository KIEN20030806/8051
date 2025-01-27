#include "DS1302.h"

#define SETTING_KEY   P3_7
#define OPERATION_KEY P3_6

#define  DT_SS        P2_0    // 段选
#define  DT_BS        P2_1    // 位选
#define  DT_DATA      P0
unsigned char CC_LED_DATA[] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71, 0x00 };
unsigned char LED_SS_DATA[] = { 0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F };

ds1302_Datetime datetime;
unsigned char lcd_display[8];
bool OPERATION_KEY_PRESSED = false;
bool SETTING_KEY_PRESSED = false;
// 0 is time, 1 is date
bool DISPLAY_MODE = 0;

unsigned char SETTING_MODE = 0, increase=0, twinkle = 0;

void delay()
{
  unsigned char a, b;
  for(b=80;b>0;b--)
    for(a=3;a>0;a--);
}

void setup()
{
  SETTING_KEY = high;
  OPERATION_KEY = high;
}

void loop()
{
  unsigned char i;
  ds1302_get_datetime(&datetime);

  // 显示模式切换按键
  if(OPERATION_KEY == low && !OPERATION_KEY_PRESSED)
  {
    OPERATION_KEY_PRESSED = true;
  }
  else if(OPERATION_KEY == high && OPERATION_KEY_PRESSED)
  {
    OPERATION_KEY_PRESSED = false;
    if(SETTING_MODE)
    {
      increase=1;
    }
    else
    {
      DISPLAY_MODE = !DISPLAY_MODE;
    }
  }

  // 设置模式切换按键
  if(SETTING_KEY == low && !SETTING_KEY_PRESSED)
  {
    SETTING_KEY_PRESSED = true;
  }
  else if(SETTING_KEY == high && SETTING_KEY_PRESSED)
  {
    SETTING_KEY_PRESSED = false;
    SETTING_MODE++;
    if(SETTING_MODE > 3) SETTING_MODE = 0;
  }

  // 设置
  if(SETTING_MODE && increase)
  {
    switch (SETTING_MODE) {
      case 1:
      {
        if(DISPLAY_MODE == 0)
        {
          datetime.hour++;
          if(datetime.hour > 23) datetime.hour = 0;
        }
        else
        {
          datetime.year++;
          if(datetime.year > 50) datetime.year = 18;
        }
        break;
      }
      case 2:
      {
        if(DISPLAY_MODE == 0)
        {
          datetime.minute++;
          if(datetime.minute > 59) datetime.minute = 0;
        }
        else
        {
          datetime.month++;
          if(datetime.month > 12) datetime.month = 0;
        }
        break;
      }
      case 3:
      {
        if(DISPLAY_MODE == 0)
        {
          datetime.second++;
          if(datetime.second > 59) datetime.second = 0;
        }
        else
        {
          datetime.day++;
          // 31天的月
          if(1 == datetime.month || 3 == datetime.month || 5 == datetime.month || 7 == datetime.month || 8 == datetime.month || 10 == datetime.month || 12 == datetime.month)
          {
            if(datetime.day > 31) datetime.day = 0;
          }
          // 2月
          else if(2 == datetime.month)
          {
            // 闰年
            if((datetime.year % 4 == 0 && datetime.year % 100 != 0) || datetime.year % 400 == 0)
            {
              if(datetime.day > 29) datetime.day = 0;
            }
            else
            {
              if(datetime.day > 28) datetime.day = 0;
            }
          }
          // 30天的月
          else
          {
            if(datetime.day > 30) datetime.day = 0;
          }
        }
        break;
      }
      default:
        break;
    }
    increase = 0;
    ds1302_set_datetime(&datetime);
  }

  if(DISPLAY_MODE == 0)
  {
    if(SETTING_MODE == 1 && twinkle > 40)
    {
      lcd_display[0] = 0x10;
      lcd_display[1] = 0x10;
    }
    else
    {
      lcd_display[0] = datetime.hour / 10;
      lcd_display[1] = datetime.hour % 10;
    }
    lcd_display[2] = 0x10;
    if(SETTING_MODE == 2 && twinkle > 40)
    {
      lcd_display[3] = 0x10;
      lcd_display[4] = 0x10;
    }
    else
    {
      lcd_display[3] = datetime.minute / 10;
      lcd_display[4] = datetime.minute % 10;
    }
    lcd_display[5] = 0x10;
    if(SETTING_MODE == 3 && twinkle > 40)
    {
      lcd_display[6] = 0x10;
      lcd_display[7] = 0x10;
    }
    else
    {
      lcd_display[6] = datetime.second / 10;
      lcd_display[7] = datetime.second % 10;
    }
  }
  else
  {
    if(SETTING_MODE == 1 && twinkle > 40)
    {
      lcd_display[0] = 0x10;
      lcd_display[1] = 0x10;
    }
    else
    {
      lcd_display[0] = datetime.year / 10;
      lcd_display[1] = datetime.year % 10;
    }
    lcd_display[2] = 0x10;
    if(SETTING_MODE == 2 && twinkle > 40)
    {
      lcd_display[3] = 0x10;
      lcd_display[4] = 0x10;
    }
    else
    {
      lcd_display[3] = datetime.month / 10;
      lcd_display[4] = datetime.month % 10;
    }
    lcd_display[5] = 0x10;
    if(SETTING_MODE == 3 && twinkle > 40)
    {
      lcd_display[6] = 0x10;
      lcd_display[7] = 0x10;
    }
    else
    {
      lcd_display[6] = datetime.day / 10;
      lcd_display[7] = datetime.day % 10;
    }
  }

  for(i=0; i<8; i++)
  {
    DT_BS = high;
    DT_DATA = LED_SS_DATA[i];
    DT_BS = low;
    DT_SS = high;
    DT_DATA = CC_LED_DATA[lcd_display[i]];
    DT_SS = low;
    delay();
    DT_BS = high;
    DT_DATA = 0xFF;
    DT_BS = low;
  }
  twinkle = twinkle > 80 ? 0 : ++twinkle;
}
