/*--------------------------------------------------------------------------
ML56.H

Header file for Nuvoton ML56 / ML54 Series
--------------------------------------------------------------------------*/


/* ML56 SFR BYTE page 0  */
sfr P0                         =0x80;
sfr SP                         =0x81;
sfr DPL                        =0x82;
sfr DPH                        =0x83;
sfr RCTRIM0                    =0x84;
sfr RCTRIM1                    =0x85;
sfr RWK                        =0x86;
sfr PCON                       =0x87;

sfr TCON                       =0x88;
sfr TMOD                       =0x89;
sfr TL0                        =0x8A;
sfr TL1                        =0x8B;
sfr TH0                        =0x8C;
sfr TH1                        =0x8D;
sfr CKCON                      =0x8E;
sfr WKCON                      =0x8F;

sfr P1                         =0x90;
sfr SFRS                       =0x91;
sfr DMA0CR                     =0x92;
sfr DMA0MA                     =0x93;
sfr DMA0CNT                    =0x94;
sfr DMA0CCNT                   =0x95;
sfr CKSWT                      =0x96;
sfr CKEN                       =0x97;

sfr SCON                       =0x98;
sfr SBUF                       =0x99;
sfr SBUF1                      =0x9A;
sfr EIE0                       =0x9B;
sfr EIE1                       =0x9C;
sfr RSR                        =0x9D;
sfr IAPTC                      =0x9E;
sfr CHPCON                     =0x9F;

sfr P2                         =0xA0;
sfr ADCCON0                    =0xA1;
sfr AUXR0                      =0xA2;
sfr BODCON0                    =0xA3;
sfr IAPTRG                     =0xA4;
sfr IAPUEN                     =0xA5;
sfr IAPAL                      =0xA6;
sfr IAPAH                      =0xA7;

sfr IE                         =0xA8;
sfr SADDR0                      =0xA9;
sfr WDCON                      =0xAA;
sfr BODCON1                    =0xAB;
sfr EIP2                       =0xAC;
sfr EIPH2                      =0xAD;
sfr IAPFD                      =0xAE;
sfr IAPCN                      =0xAF;

sfr P3                         =0xB0;
sfr P5                         =0xB1;
sfr I2C1ADDR0                  =0xB2;
sfr I2C1DAT                    =0xB3;
sfr I2C1STAT                   =0xB4;
sfr I2C1CLK                    =0xB5;
sfr I2C1TOC                    =0xB6;
sfr IPH                        =0xB7;

sfr IP                         =0xB8;
sfr SADEN0                     =0xB9;
sfr SADEN1                     =0xBA;
sfr SADDR1                     =0xBB;
sfr I2C0DAT                    =0xBC;
sfr I2C0STAT                   =0xBD;
sfr I2C0CLK                    =0xBE;
sfr I2C0TOC                    =0xBF;

sfr I2C0CON                    =0xC0;
sfr I2C0ADDR0                  =0xC1;
sfr ADCRL                      =0xC2;
sfr ADCRH                      =0xC3;
sfr T3CON                      =0xC4;
sfr RL3                        =0xC5;
sfr RH3                        =0xC6;
sfr TA                         =0xC7;

sfr T2CON                      =0xC8;
sfr T2MOD                      =0xC9;
sfr PIF                        =0xCA;
sfr ADCBAL                     =0xCB;
sfr TL2                        =0xCC;
sfr TH2                        =0xCD;
sfr ADCMPL                     =0xCE;
sfr ADCMPH                     =0xCF;

sfr PSW                        =0xD0;
sfr PWM0CON0                   =0xD1;
sfr ACMPCR0                    =0xD2;
sfr ACMPCR1                    =0xD3;
sfr ACMPSR                     =0xD4;
sfr ACMPVREF                   =0xD5;
sfr SC0CR0                     =0xD6;
sfr SC0CR1                     =0xD7;

sfr P4                         =0xD8;
sfr SC0DR                      =0xD9;
sfr SC0EGT                     =0xDA;
sfr SC0ETURD0                  =0xDB;
sfr SC0ETURD1                  =0xDC;
sfr SC0IE                      =0xDD;
sfr SC0IS                      =0xDE;
sfr SC0TSR                     =0xDF;

sfr ACC                        =0xE0;
sfr ADCCON1                    =0xE1;
sfr ADCCON2                    =0xE2;
sfr ADCDLY                     =0xE3;
sfr ADCBAH                     =0xE4;
sfr ADCSN                      =0xE5;
sfr ADCCN                      =0xE6;
sfr ADCSR                      =0xE7;

sfr I2C1CON                    =0xE8;
sfr DMA0TSR                    =0xE9;
sfr MTM0DA                     =0xEA;
sfr DMA1CR                     =0xEB;
sfr DMA1MA                     =0xEC;
sfr DMA1CNT                    =0xED;
sfr DMA1CCNT                   =0xEE;
sfr EIP0                       =0xEF;

sfr B                          =0xF0;
sfr DMA1TSR                    =0xF1;
sfr MTM1DA                     =0xF2;
sfr SPI0CR0                    =0xF3;
sfr SPI0SR                     =0xF4;
sfr SPI0DR                     =0xF5;
sfr DMA0BAH                    =0xF6;
sfr EIPH0                      =0xF7;

sfr S1CON                      =0xF8;
sfr SPI1CR0                    =0xF9;
sfr SPI1CR1                    =0xFA;
sfr SPI1SR                     =0xFB;
sfr SPI1DR                     =0xFC;
sfr DMA1BAH                    =0xFD;
sfr EIP1                       =0xFE;
sfr EIPH1                      =0xFF;

/* ML56 SFR BYTE page 1  */
sfr LRCTRIM                    =0x84;        /*SFRS Page1 */
sfr XLTCON                     =0x85;        /*SFRS Page1 */
sfr CWK                        =0x86;        /*SFRS Page1 */

sfr P0DW                       =0x8A;        /*SFRS Page1 */
sfr P1DW                       =0x8B;        /*SFRS Page1 */
sfr P2DW                       =0x8C;        /*SFRS Page1 */
sfr P3DW                       =0x8D;        /*SFRS Page1 */
sfr P4DW                       =0x8E;        /*SFRS Page1 */
sfr P5DW                       =0x8F;        /*SFRS Page1 */

sfr P0UP                       =0x92;        /*SFRS Page1 */
sfr P1UP                       =0x93;        /*SFRS Page1 */
sfr P2UP                       =0x94;        /*SFRS Page1 */
sfr P3UP                       =0x95;        /*SFRS Page1 */
sfr P4UP                       =0x96;        /*SFRS Page1 */
sfr P5UP                       =0x97;        /*SFRS Page1 */

sfr P0S                        =0x99;        /*SFRS Page1 */
sfr P0SR                       =0x9A;        /*SFRS Page1 */
sfr P1S                        =0x9B;        /*SFRS Page1 */
sfr P1SR                       =0x9C;        /*SFRS Page1 */
sfr P2S                        =0x9D;        /*SFRS Page1 */
sfr P2SR                       =0x9E;        /*SFRS Page1 */

sfr PIPS0                      =0xA1;        /*SFRS Page1 */
sfr PIPS1                      =0xA2;        /*SFRS Page1 */
sfr PIPS2                      =0xA3;        /*SFRS Page1 */
sfr PIPS3                      =0xA4;        /*SFRS Page1 */
sfr PIPS4                      =0xA5;        /*SFRS Page1 */
sfr PIPS5                      =0xA6;        /*SFRS Page1 */
sfr PIPS6                      =0xA7;        /*SFRS Page1 */

sfr VRFCON                     =0xA9;        /*SFRS Page1 */
sfr VRFTRIM                    =0xAA;        /*SFRS Page1 */
sfr ACMPCR2                    =0xAB;        /*SFRS Page1 */
sfr P3S                        =0xAC;        /*SFRS Page1 */
sfr P3SR                       =0xAD;        /*SFRS Page1 */
sfr P5SR                       =0xAE;        /*SFRS Page1 */
sfr PIPS7                      =0xAF;        /*SFRS Page1 */

sfr P0M1                       =0xB1;        /*SFRS Page1 */
sfr P0M2                       =0xB2;        /*SFRS Page1 */
sfr P1M1                       =0xB3;        /*SFRS Page1 */
sfr P1M2                       =0xB4;        /*SFRS Page1 */
sfr P2M1                       =0xB5;        /*SFRS Page1 */
sfr P2M2                       =0xB6;        /*SFRS Page1 */
sfr PWM0INTC                   =0xB7;        /*SFRS Page1 */

sfr P4M1                       =0xB9;        /*SFRS Page1 */
sfr P4M2                       =0xBA;        /*SFRS Page1 */
sfr P4S                        =0xBB;        /*SFRS Page1 */
sfr P4SR                       =0xBC;        /*SFRS Page1 */
sfr P5M1                       =0xBD;        /*SFRS Page1 */
sfr P5M2                       =0xBE;        /*SFRS Page1 */
sfr P5S                        =0xBF;        /*SFRS Page1 */

sfr CKDIV                      =0xC1;        /*SFRS Page1 */
sfr P3M1                       =0xC2;        /*SFRS Page1 */
sfr P3M2                       =0xC3;        /*SFRS Page1 */
sfr PWM0C4H                    =0xC4;        /*SFRS Page1 */
sfr PWM0C5H                    =0xC5;        /*SFRS Page1 */
sfr PORDIS                     =0xC6;        /*SFRS Page1 */

sfr AUXR1                      =0xC9;        /*SFRS Page1 */
sfr RCMP2L                     =0xCA;        /*SFRS Page1 */
sfr RCMP2H                     =0xCB;        /*SFRS Page1 */
sfr PWM0C4L                    =0xCC;        /*SFRS Page1 */
sfr PWM0C5L                    =0xCD;        /*SFRS Page1 */
sfr AINDIDS0                   =0xCE;        /*SFRS Page1 */
sfr BIASTEST                   =0xCF;        /*SFRS Page1 */

sfr PWM0PH                     =0xD1;        /*SFRS Page1 */
sfr PWM0C0H                    =0xD2;        /*SFRS Page1 */
sfr PWM0C1H                    =0xD3;        /*SFRS Page1 */
sfr PWM0C2H                    =0xD4;        /*SFRS Page1 */
sfr PWM0C3H                    =0xD5;        /*SFRS Page1 */
sfr PWM0NP                     =0xD6;        /*SFRS Page1 */
sfr PWM0FBD                    =0xD7;        /*SFRS Page1 */

sfr PWM0PL                     =0xD9;        /*SFRS Page1 */
sfr PWM0C0L                    =0xDA;        /*SFRS Page1 */
sfr PWM0C1L                    =0xDB;        /*SFRS Page1 */
sfr PWM0C2L                    =0xDC;        /*SFRS Page1 */
sfr PWM0C3L                    =0xDD;        /*SFRS Page1 */
sfr PWM0IOCON                  =0xDE;        /*SFRS Page1 */
sfr PWM0CON1                   =0xDF;        /*SFRS Page1 */

sfr CAPCON0                    =0xE1;        /*SFRS Page1 */
sfr CAPCON1                    =0xE2;        /*SFRS Page1 */
sfr CAPCON2                    =0xE3;        /*SFRS Page1 */
sfr C0L                        =0xE4;        /*SFRS Page1 */
sfr C0H                        =0xE5;        /*SFRS Page1 */
sfr C1L                        =0xE6;        /*SFRS Page1 */
sfr C1H                        =0xE7;        /*SFRS Page1 */

sfr PICON                      =0xE9;        /*SFRS Page1 */
sfr PINEN                      =0xEA;        /*SFRS Page1 */
sfr PIPEN                      =0xEB;        /*SFRS Page1 */
sfr BCKCON                     =0xEC;        /*SFRS Page1 */
sfr C2L                        =0xED;        /*SFRS Page1 */
sfr C2H                        =0xEE;        /*SFRS Page1 */
sfr LDOTRIM                    =0xEF;        /*SFRS Page1 */

sfr CAPCON3                    =0xF1;        /*SFRS Page1 */
sfr CAPCON4                    =0xF2;        /*SFRS Page1 */
sfr SPI0CR1                    =0xF3;        /*SFRS Page1 */
sfr AUXR2                      =0xF4;        /*SFRS Page1 */
sfr LDOOEN                     =0xF5;        /*SFRS Page1 */
sfr ADJ_ADC_HIRC               =0xF6;        /*SFRS Page1 */
// sfr (reserved for LVRTRIM)     =0xF7;     /*SFRS Page1 */

sfr PWM0DTEN                   =0xF9;        /*SFRS Page1 */
sfr PWM0DTCNT                  =0xFA;        /*SFRS Page1 */
sfr PWM0MEN                    =0xFB;        /*SFRS Page1 */
sfr PWM0MD                     =0xFC;        /*SFRS Page1 */
sfr LVRFLTEN                   =0xFD;        /*SFRS Page1 */
sfr RCNT                       =0xFE;        /*SFRS Page1 */
sfr LVRDIS                     =0xFF;        /*SFRS Page1 */

/* ML56 SFR BYTE page 2  */
sfr P6M1                       =0x84;        /*SFRS Page2 */
sfr P6M2                       =0x85;        /*SFRS Page2 */
sfr PWM1PH                     =0x86;        /*SFRS Page2 */

sfr PWM1C0H                    =0x8A;        /*SFRS Page2 */
sfr PWM1C1H                    =0x8B;        /*SFRS Page2 */
sfr PWM1MD                     =0x8C;        /*SFRS Page2 */
sfr PWM1MEN                    =0x8D;        /*SFRS Page2 */
sfr P6SR                       =0x8E;        /*SFRS Page2 */
sfr P6DW                       =0x8F;        /*SFRS Page2 */

sfr P6MF10                     =0x92;        /*SFRS Page2 */
sfr P6MF32                     =0x93;        /*SFRS Page2 */
sfr P6MF54                     =0x94;        /*SFRS Page2 */
sfr P6MF76                     =0x95;        /*SFRS Page2 */
sfr P6S                        =0x96;        /*SFRS Page2 */
sfr P6UP                       =0x97;        /*SFRS Page2 */

sfr PWM1PL                     =0x99;        /*SFRS Page2 */
sfr PWM1C0L                    =0x9A;        /*SFRS Page2 */
sfr PWM1C1L                    =0x9B;        /*SFRS Page2 */
sfr PWM1CON0                   =0x9C;        /*SFRS Page2 */
sfr PWM1CON1                   =0x9D;        /*SFRS Page2 */
sfr PWM1INTC                   =0x9E;        /*SFRS Page2 */

sfr I2C0ADDR1                  =0xA1;        /*SFRS Page2 */
sfr I2C0ADDR2                  =0xA2;        /*SFRS Page2 */
sfr I2C0ADDR3                  =0xA3;        /*SFRS Page2 */
sfr I2C1ADDR1                  =0xA4;        /*SFRS Page2 */
sfr I2C1ADDR2                  =0xA5;        /*SFRS Page2 */
sfr I2C1ADDR3                  =0xA6;        /*SFRS Page2 */
sfr P6                         =0xA7;        /*SFRS Page2 */

sfr DMA3TSR                    =0xA9;        /*SFRS Page2 */
sfr DMA3BAH                    =0xAA;        /*SFRS Page2 */
sfr DMA3CR                     =0xAB;        /*SFRS Page2 */
sfr DMA3MA                     =0xAC;        /*SFRS Page2 */
sfr DMA3CNT                    =0xAD;        /*SFRS Page2 */
sfr DMA3CCNT                   =0xAE;        /*SFRS Page2 */
sfr MTM3DA                     =0xAF;        /*SFRS Page2 */

sfr DMA2TSR                    =0xB1;        /*SFRS Page2 */
sfr DMA2BAH                    =0xB2;        /*SFRS Page2 */
sfr DMA2CR                     =0xB3;        /*SFRS Page2 */
sfr DMA2MA                     =0xB4;        /*SFRS Page2 */
sfr DMA2CNT                    =0xB5;        /*SFRS Page2 */
sfr DMA2CCNT                   =0xB6;        /*SFRS Page2 */
sfr MTM2DA                     =0xB7;        /*SFRS Page2 */

sfr PWM2PH                     =0xB9;        /*SFRS Page2 */
sfr PWM2C0H                    =0xBA;        /*SFRS Page2 */
sfr PWM2C1H                    =0xBB;        /*SFRS Page2 */
sfr PWM2MD                     =0xBC;        /*SFRS Page2 */
sfr PWM2MEN                    =0xBD;        /*SFRS Page2 */
sfr RWKH                       =0xBF;        /*SFRS Page2 */

sfr PWM2PL                     =0xC1;        /*SFRS Page2 */
sfr PWM2C0L                    =0xC2;        /*SFRS Page2 */
sfr PWM2C1L                    =0xC3;        /*SFRS Page2 */
sfr PWM2CON0                   =0xC4;        /*SFRS Page2 */
sfr PWM2CON1                   =0xC5;        /*SFRS Page2 */
sfr PWM2INTC                   =0xC6;        /*SFRS Page2 */

sfr PWM3PH                     =0xC9;        /*SFRS Page2 */
sfr PWM3C0H                    =0xCA;        /*SFRS Page2 */
sfr PWM3C1H                    =0xCB;        /*SFRS Page2 */
sfr PWM3MD                     =0xCC;        /*SFRS Page2 */
sfr PWM3MEN                    =0xCD;        /*SFRS Page2 */
sfr AINDIDS1                   =0xCE;        /*SFRS Page2 */
sfr I2C0ADDRM                  =0xCF;        /*SFRS Page2 */

sfr PWM3PL                     =0xD1;        /*SFRS Page2 */
sfr PWM3C0L                    =0xD2;        /*SFRS Page2 */
sfr PWM3C1L                    =0xD3;        /*SFRS Page2 */
sfr PWM3CON0                   =0xD4;        /*SFRS Page2 */
sfr PWM3CON1                   =0xD5;        /*SFRS Page2 */
sfr PWM3INTC                   =0xD6;        /*SFRS Page2 */
sfr I2C1ADDRM                  =0xD7;        /*SFRS Page2 */

sfr SC1DR                      =0xD9;        /*SFRS Page2 */
sfr SC1EGT                     =0xDA;        /*SFRS Page2 */
sfr SC1ETURD0                  =0xDB;        /*SFRS Page2 */
sfr SC1ETURD1                  =0xDC;        /*SFRS Page2 */
sfr SC1IE                      =0xDD;        /*SFRS Page2 */
sfr SC1IS                      =0xDE;        /*SFRS Page2 */
sfr SC1TSR                     =0xDF;        /*SFRS Page2 */

sfr P5MF32                     =0xE1;        /*SFRS Page2 */
sfr P5MF54                     =0xE2;        /*SFRS Page2 */
sfr P5MF76                     =0xE3;        /*SFRS Page2 */
sfr BRCTRIM                    =0xE4;        /*SFRS Page2 */
sfr ADCCAL                     =0xE5;        /*SFRS Page2 */
sfr SC1CR0                     =0xE6;        /*SFRS Page2 */
sfr SC1CR1                     =0xE7;        /*SFRS Page2 */

sfr P3MF54                     =0xE9;        /*SFRS Page2 */
sfr P3MF76                     =0xEA;        /*SFRS Page2 */
sfr P4MF10                     =0xEB;        /*SFRS Page2 */
sfr P4MF32                     =0xEC;        /*SFRS Page2 */
sfr P4MF54                     =0xED;        /*SFRS Page2 */
sfr P4MF76                     =0xEE;        /*SFRS Page2 */
sfr P5MF10                     =0xEF;        /*SFRS Page2 */

sfr P1MF76                     =0xF1;        /*SFRS Page2 */
sfr P2MF10                     =0xF2;        /*SFRS Page2 */
sfr P2MF32                     =0xF3;        /*SFRS Page2 */
sfr P2MF54                     =0xF4;        /*SFRS Page2 */
sfr P2MF76                     =0xF5;        /*SFRS Page2 */
sfr P3MF10                     =0xF6;        /*SFRS Page2 */
sfr P3MF32                     =0xF7;        /*SFRS Page2 */

sfr P0MF10                     =0xF9;        /*SFRS Page2 */
sfr P0MF32                     =0xFA;        /*SFRS Page2 */
sfr P0MF54                     =0xFB;        /*SFRS Page2 */
sfr P0MF76                     =0xFC;        /*SFRS Page2 */
sfr P1MF10                     =0xFD;        /*SFRS Page2 */
sfr P1MF32                     =0xFE;        /*SFRS Page2 */
sfr P1MF54                     =0xFF;        /*SFRS Page2 */

/* ML56 SFR BYTE page 3  */

sfr DMA0CR1                    =0x8A;        /*SFRS Page3 */
sfr DMA1CR1                    =0x8B;        /*SFRS Page3 */
sfr DMA2CR1                    =0x8C;        /*SFRS Page3 */
sfr DMA3CR1                    =0x8D;        /*SFRS Page3 */

sfr DMA0CRC                    =0x92;        /*SFRS Page3 */
sfr DMA1CRC                    =0x93;        /*SFRS Page3 */
sfr DMA2CRC                    =0x94;        /*SFRS Page3 */
sfr DMA3CRC                    =0x95;        /*SFRS Page3 */

sfr DMA0SEED                   =0x9A;        /*SFRS Page3 */
sfr DMA1SEED                   =0x9B;        /*SFRS Page3 */
sfr DMA2SEED                   =0x9C;        /*SFRS Page3 */
sfr DMA3SEED                   =0x9D;        /*SFRS Page3 */

sfr RTCINIT                    =0xA1;        /*SFRS Page3 */
sfr RTCRWEN                    =0xA2;        /*SFRS Page3 */
sfr RTCCLKSEL                  =0xA3;        /*SFRS Page3 */
sfr RTCFREQADJ0                =0xA4;        /*SFRS Page3 */
sfr RTCFREQADJ1                =0xA5;        /*SFRS Page3 */
sfr RTCINTEN                   =0xA6;        /*SFRS Page3 */
sfr RTCINTSTS                  =0xA7;        /*SFRS Page3 */

sfr RTCTIMESEC                 =0xA9;        /*SFRS Page3 */
sfr RTCTIMEMIN                 =0xAA;        /*SFRS Page3 */
sfr RTCTIMEHR                  =0xAB;        /*SFRS Page3 */
sfr RTCTIMEHZ                  =0xAC;        /*SFRS Page3 */
sfr RTCCALDAY                  =0xAD;        /*SFRS Page3 */
sfr RTCCALMON                  =0xAE;        /*SFRS Page3 */
sfr RTCCALYEAR                 =0xAF;        /*SFRS Page3 */

sfr RTCTALMSEC                 =0xB1;        /*SFRS Page3 */
sfr RTCTALMMIN                 =0xB2;        /*SFRS Page3 */
sfr RTCTALMHR                  =0xB3;        /*SFRS Page3 */
sfr RTCTALMHZ                  =0xB4;        /*SFRS Page3 */
sfr RTCCALMDAY                 =0xB5;        /*SFRS Page3 */
sfr RTCCALMMON                 =0xB6;        /*SFRS Page3 */
sfr RTCCALMYEAR                =0xB7;        /*SFRS Page3 */

sfr RTCCLKFMT                  =0xB9;        /*SFRS Page3 */
sfr RTCCLKTEST                 =0xBA;        /*SFRS Page3 */
sfr RTCWEEKDAY                 =0xBB;        /*SFRS Page3 */
sfr RTCLEAPYEAR                =0xBC;        /*SFRS Page3 */
sfr RTCTICK                    =0xBD;        /*SFRS Page3 */
sfr RTCTAMSK                   =0xBE;        /*SFRS Page3 */
sfr RTCCAMSK                   =0xBF;        /*SFRS Page3 */

sfr PWM0FBS                    =0xCE;        /*SFRS Page3 */
sfr AUXR3                      =0xCF;        /*SFRS Page3 */

sfr LCDCPUMP                   =0xF1;        /*SFRS Page3 */
sfr LCDSEG0                    =0xF2;        /*SFRS Page3 */
sfr LCDSEG1                    =0xF3;        /*SFRS Page3 */
sfr LCDSEG2                    =0xF4;        /*SFRS Page3 */
sfr LCDSEG3                    =0xF5;        /*SFRS Page3 */

sfr LCDCON                     =0xF9;        /*SFRS Page3 */
sfr LCDCLK                     =0xFA;        /*SFRS Page3 */
sfr LCDPTR                     =0xFB;        /*SFRS Page3 */
sfr LCDDAT                     =0xFC;        /*SFRS Page3 */
sfr LCDPWR                     =0xFD;        /*SFRS Page3 */
sfr LCDBL                      =0xFE;        /*SFRS Page3 */
sfr LCDRESBUF                  =0xFF;        /*SFRS Page3 */


/*  BIT Registers  */
/*  P0  */
sbit P00        = P0^0;
sbit P01        = P0^1;
sbit P02        = P0^2;
sbit P03        = P0^3;
sbit P04        = P0^4;
sbit P05        = P0^5;
sbit P06        = P0^6;
sbit P07        = P0^7;

/*  TCON  */
sbit TF1        = TCON^7;
sbit TR1        = TCON^6;
sbit TF0        = TCON^5;
sbit TR0        = TCON^4;
sbit IE1        = TCON^3;
sbit IT1        = TCON^2;
sbit IE0        = TCON^1;
sbit IT0        = TCON^0;

/*  P1  */
sbit P10        = P1^0;
sbit P11        = P1^1;
sbit P12        = P1^2;
sbit P13        = P1^3;
sbit P14        = P1^4;
sbit P15        = P1^5;
sbit P16        = P1^6;
sbit P17        = P1^7;

/*  SCON  */
sbit SM0        = SCON^7;
sbit FE         = SCON^7;
sbit SM1        = SCON^6;
sbit SM2        = SCON^5;
sbit REN        = SCON^4;
sbit TB8        = SCON^3;
sbit RB8        = SCON^2;
sbit TI         = SCON^1;
sbit RI         = SCON^0;

/*  P2  */
sbit P20        = P2^0;
sbit P21        = P2^1;
sbit P22        = P2^2;
sbit P23        = P2^3;
sbit P24        = P2^4;
sbit P25        = P2^5;
sbit P26        = P2^6;
sbit P27        = P2^7;

/*  IE  */
sbit EA         = IE^7;
sbit EADC       = IE^6;
sbit EBOD       = IE^5;
sbit ES         = IE^4;
sbit ET1        = IE^3;
sbit EX1        = IE^2;
sbit ET0        = IE^1;
sbit EX0        = IE^0;

/*  P3  */
sbit P30        = P3^0;
sbit P31        = P3^1;
sbit P32        = P3^2;
sbit P33        = P3^3;
sbit P34        = P3^4;
sbit P35        = P3^5;
sbit P36        = P3^6;
sbit P37        = P3^7;

/*  IP  */
sbit PADC       = IP^6;
sbit PBOD       = IP^5;
sbit PS         = IP^4;
sbit PT1        = IP^3;
sbit PX1        = IP^2;
sbit PT0        = IP^1;
sbit PX0        = IP^0;

/*  I2CON  */
sbit I2CEN0     = I2C0CON^6;
sbit STA0       = I2C0CON^5;
sbit STO0       = I2C0CON^4;
sbit SI0        = I2C0CON^3;
sbit AA0        = I2C0CON^2;
sbit I2C0PX     = I2C0CON^0;

/*  I2C1CON  */
sbit I2CEN1      = I2C1CON^6;
sbit STA1        = I2C1CON^5;
sbit STO1        = I2C1CON^4;
sbit SI1         = I2C1CON^3;
sbit AA1         = I2C1CON^2;
sbit I2CPX1      = I2C1CON^0;

/*  T2CON  */
sbit TF2        = T2CON^7;
sbit TR2        = T2CON^2;
sbit CM_RL2     = T2CON^0;

/*  PSW */
sbit CY         = PSW^7;
sbit AC         = PSW^6;
sbit F0         = PSW^5;
sbit RS1        = PSW^4;
sbit RS0        = PSW^3;
sbit OV         = PSW^2;
sbit P          = PSW^0;

/*  P4  */
sbit P40        = P4^0;
sbit P41        = P4^1;
sbit P42        = P4^2;
sbit P43        = P4^3;
sbit P44        = P4^4;
sbit P45        = P4^5;
sbit P46        = P4^6;
sbit P47        = P4^7;


/*  SCON_1  */
sbit SM0_1      = S1CON^7;
sbit FE_1       = S1CON^7;
sbit SM1_1      = S1CON^6;
sbit SM2_1      = S1CON^5;
sbit REN_1      = S1CON^4;
sbit TB8_1      = S1CON^3;
sbit RB8_1      = S1CON^2;
sbit TI_1       = S1CON^1;
sbit RI_1       = S1CON^0;


// /*  Other Pin Name  */
sbit AIN0       = P2^5;
sbit AIN1       = P2^4;
sbit AIN2       = P2^3;
sbit AIN3       = P2^2;
sbit AIN4       = P2^1;
sbit AIN5       = P2^0;
sbit AIN6       = P3^1;
sbit AIN7       = P3^2;

sbit ACMP_P0    = P2^5;
sbit ACMP_P1    = P2^3;
sbit ACMP_P2    = P2^1;
sbit ACMP_P3    = P3^0;

sbit ACMP0_N0   = P2^4;
sbit ACMP0_N1   = P2^0;
sbit ACMP1_N0   = P2^2;
sbit ACMP1_N1   = P3^1;

