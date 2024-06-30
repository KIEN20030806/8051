;--------------------------------------------------------------------------
;	ML51.inc
;	Header file for Nuvoton ML51 Series
;	2020/02/24
;--------------------------------------------------------------------------

; /* ML56 SFR BYTE page 0 */ 
P0                       DATA       0080H     ;
SP                       DATA       0081H     ;
DPL                      DATA       0082H     ;
DPH                      DATA       0083H     ;
RCTRIM0                  DATA       0084H     ;
RCTRIM1                  DATA       0085H     ;
RWK                      DATA       0086H     ;
PCON                     DATA       0087H     ;

TCON                     DATA       0088H     ;
TMOD                     DATA       0089H     ;
TL0                      DATA       008AH     ;
TL1                      DATA       008BH     ;
TH0                      DATA       008CH     ;
TH1                      DATA       008DH     ;
CKCON                    DATA       008EH     ;
WKCON                    DATA       008FH     ;

P1                       DATA       0090H     ;
SFRS                     DATA       0091H     ;
DMA0CR                   DATA       0092H     ;
DMA0MA                   DATA       0093H     ;
DMA0CNT                  DATA       0094H     ;
DMA0CCNT                 DATA       0095H     ;
CKSWT                    DATA       0096H     ;
CKEN                     DATA       0097H     ;

SCON                     DATA       0098H     ;
SBUF                     DATA       0099H     ;
SBUF1                    DATA       009AH     ;
EIE0                     DATA       009BH     ;
EIE1                     DATA       009CH     ;
RSR                      DATA       009DH     ;
IAPTC                    DATA       009EH     ;
CHPCON                   DATA       009FH     ;

P2                       DATA       00A0H     ;
ADCCON0                  DATA       00A1H     ;
AUXR0                    DATA       00A2H     ;
BODCON0                  DATA       00A3H     ;
IAPTRG                   DATA       00A4H     ;
IAPUEN                   DATA       00A5H     ;
IAPAL                    DATA       00A6H     ;
IAPAH                    DATA       00A7H     ;

IE                       DATA       00A8H     ;
SADDR0                   DATA       00A9H     ;
WDCON                    DATA       00AAH     ;
BODCON1                  DATA       00ABH     ;
EIP2                     DATA       00ACH     ;
EIPH2                    DATA       00ADH     ;
IAPFD                    DATA       00AEH     ;
IAPCN                    DATA       00AFH     ;

P3                       DATA       00B0H     ;
P5                       DATA       00B1H     ;
I2C1ADDR0                DATA       00B2H     ;
I2C1DAT                  DATA       00B3H     ;
I2C1STAT                 DATA       00B4H     ;
I2C1CLK                  DATA       00B5H     ;
I2C1TOC                  DATA       00B6H     ;
IPH                      DATA       00B7H     ;

IP                       DATA       00B8H     ;
SADEN0                   DATA       00B9H     ;
SADEN1                   DATA       00BAH     ;
SADDR1                   DATA       00BBH     ;
I2C0DAT                  DATA       00BCH     ;
I2C0STAT                 DATA       00BDH     ;
I2C0CLK                  DATA       00BEH     ;
I2C0TOC                  DATA       00BFH     ;

I2C0CON                  DATA       00C0H     ;
I2C0ADDR0                DATA       00C1H     ;
ADCRL                    DATA       00C2H     ;
ADCRH                    DATA       00C3H     ;
T3CON                    DATA       00C4H     ;
RL3                      DATA       00C5H     ;
RH3                      DATA       00C6H     ;
TA                       DATA       00C7H     ;

T2CON                    DATA       00C8H     ;
T2MOD                    DATA       00C9H     ;
PIF                      DATA       00CAH     ;
ADCBAL                   DATA       00CBH     ;
TL2                      DATA       00CCH     ;
TH2                      DATA       00CDH     ;
ADCMPL                   DATA       00CEH     ;
ADCMPH                   DATA       00CFH     ;

PSW                      DATA       00D0H     ;
PWM0CON0                 DATA       00D1H     ;
ACMPCR0                  DATA       00D2H     ;
ACMPCR1                  DATA       00D3H     ;
ACMPSR                   DATA       00D4H     ;
ACMPVREF                 DATA       00D5H     ;
SC0CR0                   DATA       00D6H     ;
SC0CR1                   DATA       00D7H     ;

P4                       DATA       00D8H     ;
SC0DR                    DATA       00D9H     ;
SC0EGT                   DATA       00DAH     ;
SC0ETURD0                DATA       00DBH     ;
SC0ETURD1                DATA       00DCH     ;
SC0IE                    DATA       00DDH     ;
SC0IS                    DATA       00DEH     ;
SC0TSR                   DATA       00DFH     ;

ACC                      DATA       00E0H     ;
ADCCON1                  DATA       00E1H     ;
ADCCON2                  DATA       00E2H     ;
ADCDLY                   DATA       00E3H     ;
ADCBAH                   DATA       00E4H     ;
ADCSN                    DATA       00E5H     ;
ADCCN                    DATA       00E6H     ;
ADCSR                    DATA       00E7H     ;

I2C1CON                  DATA       00E8H     ;
DMA0TSR                  DATA       00E9H     ;
MTM0DA                   DATA       00EAH     ;
DMA1CR                   DATA       00EBH     ;
DMA1MA                   DATA       00ECH     ;
DMA1CNT                  DATA       00EDH     ;
DMA1CCNT                 DATA       00EEH     ;
EIP0                     DATA       00EFH     ;

B                        DATA       00F0H     ;
DMA1TSR                  DATA       00F1H     ;
MTM1DA                   DATA       00F2H     ;
SPI0CR0                  DATA       00F3H     ;
SPI0SR                   DATA       00F4H     ;
SPI0DR                   DATA       00F5H     ;
DMA0BAH                  DATA       00F6H     ;
EIPH0                    DATA       00F7H     ;

S1CON                    DATA       00F8H     ;
SPI1CR0                  DATA       00F9H     ;
SPI1CR1                  DATA       00FAH     ;
SPI1SR                   DATA       00FBH     ;
SPI1DR                   DATA       00FCH     ;
DMA1BAH                  DATA       00FDH     ;
EIP1                     DATA       00FEH     ;
EIPH1                    DATA       00FFH     ;

; /* ML56 SFR BYTE page 1  */ 

LRCTRIM                  DATA       0084H     ;/*SFRS Page1 */
XLTCON                   DATA       0085H     ;/*SFRS Page1 */
CWK                      DATA       0086H     ;/*SFRS Page1 */

P0DW                     DATA       008AH     ;/*SFRS Page1 */
P1DW                     DATA       008BH     ;/*SFRS Page1 */
P2DW                     DATA       008CH     ;/*SFRS Page1 */
P3DW                     DATA       008DH     ;/*SFRS Page1 */
P4DW                     DATA       008EH     ;/*SFRS Page1 */
P5DW                     DATA       008FH     ;/*SFRS Page1 */

P0UP                     DATA       0092H     ;/*SFRS Page1 */
P1UP                     DATA       0093H     ;/*SFRS Page1 */
P2UP                     DATA       0094H     ;/*SFRS Page1 */
P3UP                     DATA       0095H     ;/*SFRS Page1 */
P4UP                     DATA       0096H     ;/*SFRS Page1 */
P5UP                     DATA       0097H     ;/*SFRS Page1 */

P0S                      DATA       0099H     ;/*SFRS Page1 */
P0SR                     DATA       009AH     ;/*SFRS Page1 */
P1S                      DATA       009BH     ;/*SFRS Page1 */
P1SR                     DATA       009CH     ;/*SFRS Page1 */
P2S                      DATA       009DH     ;/*SFRS Page1 */
P2SR                     DATA       009EH     ;/*SFRS Page1 */

PIPS0                    DATA       00A1H     ;/*SFRS Page1 */
PIPS1                    DATA       00A2H     ;/*SFRS Page1 */
PIPS2                    DATA       00A3H     ;/*SFRS Page1 */
PIPS3                    DATA       00A4H     ;/*SFRS Page1 */
PIPS4                    DATA       00A5H     ;/*SFRS Page1 */
PIPS5                    DATA       00A6H     ;/*SFRS Page1 */
PIPS6                    DATA       00A7H     ;/*SFRS Page1 */

VRFCON                   DATA       00A9H     ;/*SFRS Page1 */
VRFTRIM                  DATA       00AAH     ;/*SFRS Page1 */
ACMPCR2                  DATA       00ABH     ;/*SFRS Page1 */
P3S                      DATA       00ACH     ;/*SFRS Page1 */
P3SR                     DATA       00ADH     ;/*SFRS Page1 */
P5SR                     DATA       00AEH     ;/*SFRS Page1 */
PIPS7                    DATA       00AFH     ;/*SFRS Page1 */

P0M1                     DATA       00B1H     ;/*SFRS Page1 */
P0M2                     DATA       00B2H     ;/*SFRS Page1 */
P1M1                     DATA       00B3H     ;/*SFRS Page1 */
P1M2                     DATA       00B4H     ;/*SFRS Page1 */
P2M1                     DATA       00B5H     ;/*SFRS Page1 */
P2M2                     DATA       00B6H     ;/*SFRS Page1 */
PWM0INTC                 DATA       00B7H     ;/*SFRS Page1 */

P4M1                     DATA       00B9H     ;/*SFRS Page1 */
P4M2                     DATA       00BAH     ;/*SFRS Page1 */
P4S                      DATA       00BBH     ;/*SFRS Page1 */
P4SR                     DATA       00BCH     ;/*SFRS Page1 */
P5M1                     DATA       00BDH     ;/*SFRS Page1 */
P5M2                     DATA       00BEH     ;/*SFRS Page1 */
P5S                      DATA       00BFH     ;/*SFRS Page1 */

CKDIV                    DATA       00C1H     ;/*SFRS Page1 */
P3M1                     DATA       00C2H     ;/*SFRS Page1 */
P3M2                     DATA       00C3H     ;/*SFRS Page1 */
PWM0C4H                  DATA       00C4H     ;/*SFRS Page1 */
PWM0C5H                  DATA       00C5H     ;/*SFRS Page1 */
PORDIS                   DATA       00C6H     ;/*SFRS Page1 */

AUXR1                    DATA       00C9H     ;/*SFRS Page1 */
RCMP2L                   DATA       00CAH     ;/*SFRS Page1 */
RCMP2H                   DATA       00CBH     ;/*SFRS Page1 */
PWM0C4L                  DATA       00CCH     ;/*SFRS Page1 */
PWM0C5L                  DATA       00CDH     ;/*SFRS Page1 */
AINDIDS0                 DATA       00CEH     ;/*SFRS Page1 */
BIASTEST                 DATA       00CFH     ;/*SFRS Page1 */

PWM0PH                   DATA       00D1H     ;/*SFRS Page1 */
PWM0C0H                  DATA       00D2H     ;/*SFRS Page1 */
PWM0C1H                  DATA       00D3H     ;/*SFRS Page1 */
PWM0C2H                  DATA       00D4H     ;/*SFRS Page1 */
PWM0C3H                  DATA       00D5H     ;/*SFRS Page1 */
PWM0NP                   DATA       00D6H     ;/*SFRS Page1 */
PWM0FBD                  DATA       00D7H     ;/*SFRS Page1 */

PWM0PL                   DATA       00D9H     ;/*SFRS Page1 */
PWM0C0L                  DATA       00DAH     ;/*SFRS Page1 */
PWM0C1L                  DATA       00DBH     ;/*SFRS Page1 */
PWM0C2L                  DATA       00DCH     ;/*SFRS Page1 */
PWM0C3L                  DATA       00DDH     ;/*SFRS Page1 */
PWM0IOCON                DATA       00DEH     ;/*SFRS Page1 */
PWM0CON1                 DATA       00DFH     ;/*SFRS Page1 */

CAPCON0                  DATA       00E1H     ;/*SFRS Page1 */
CAPCON1                  DATA       00E2H     ;/*SFRS Page1 */
CAPCON2                  DATA       00E3H     ;/*SFRS Page1 */
C0L                      DATA       00E4H     ;/*SFRS Page1 */
C0H                      DATA       00E5H     ;/*SFRS Page1 */
C1L                      DATA       00E6H     ;/*SFRS Page1 */
C1H                      DATA       00E7H     ;/*SFRS Page1 */

PICON                    DATA       00E9H     ;/*SFRS Page1 */
PINEN                    DATA       00EAH     ;/*SFRS Page1 */
PIPEN                    DATA       00EBH     ;/*SFRS Page1 */
BCKCON                   DATA       00ECH     ;/*SFRS Page1 */
C2L                      DATA       00EDH     ;/*SFRS Page1 */
C2H                      DATA       00EEH     ;/*SFRS Page1 */
LDOTRIM                  DATA       00EFH     ;/*SFRS Page1 */

CAPCON3                  DATA       00F1H     ;/*SFRS Page1 */
CAPCON4                  DATA       00F2H     ;/*SFRS Page1 */
SPI0CR1                  DATA       00F3H     ;/*SFRS Page1 */
AUXR2                    DATA       00F4H     ;/*SFRS Page1 */
LDOOEN                   DATA       00F5H     ;/*SFRS Page1 */
ADJ_ADC_HIRC             DATA       00F6H     ;/*SFRS Page1 */

PWM0DTEN                 DATA       00F9H     ;/*SFRS Page1 */
PWM0DTCNT                DATA       00FAH     ;/*SFRS Page1 */
PWM0MEN                  DATA       00FBH     ;/*SFRS Page1 */
PWM0MD                   DATA       00FCH     ;/*SFRS Page1 */
LVRFLTEN                 DATA       00FDH     ;/*SFRS Page1 */
RCNT                     DATA       00FEH     ;/*SFRS Page1 */
LVRDIS                   DATA       00FFH     ;/*SFRS Page1 */

;   /* ML56 SFR BYTE page 2  */
P6M1                     DATA       0084H     ;/*SFRS Page2 */
P6M2                     DATA       0085H     ;/*SFRS Page2 */
PWM1PH                   DATA       0086H     ;/*SFRS Page2 */

PWM1C0H                  DATA       008AH     ;/*SFRS Page2 */
PWM1C1H                  DATA       008BH     ;/*SFRS Page2 */
PWM1MD                   DATA       008CH     ;/*SFRS Page2 */
PWM1MEN                  DATA       008DH     ;/*SFRS Page2 */
P6SR                     DATA       008EH     ;/*SFRS Page2 */
P6DW                     DATA       008FH     ;/*SFRS Page2 */

P6MF10                   DATA       0092H     ;/*SFRS Page2 */
P6MF32                   DATA       0093H     ;/*SFRS Page2 */
P6MF54                   DATA       0094H     ;/*SFRS Page2 */
P6MF76                   DATA       0095H     ;/*SFRS Page2 */
P6S                      DATA       0096H     ;/*SFRS Page2 */
P6UP                     DATA       0097H     ;/*SFRS Page2 */

PWM1PL                   DATA       0099H     ;/*SFRS Page2 */
PWM1C0L                  DATA       009AH     ;/*SFRS Page2 */
PWM1C1L                  DATA       009BH     ;/*SFRS Page2 */
PWM1CON0                 DATA       009CH     ;/*SFRS Page2 */
PWM1CON1                 DATA       009DH     ;/*SFRS Page2 */
PWM1INTC                 DATA       009EH     ;/*SFRS Page2 */

I2C0ADDR1                DATA       00A1H     ;/*SFRS Page2 */
I2C0ADDR2                DATA       00A2H     ;/*SFRS Page2 */
I2C0ADDR3                DATA       00A3H     ;/*SFRS Page2 */
I2C1ADDR1                DATA       00A4H     ;/*SFRS Page2 */
I2C1ADDR2                DATA       00A5H     ;/*SFRS Page2 */
I2C1ADDR3                DATA       00A6H     ;/*SFRS Page2 */
P6                       DATA       00A7H     ;/*SFRS Page2 */

DMA3TSR                  DATA       00A9H     ;/*SFRS Page2 */
DMA3BAH                  DATA       00AAH     ;/*SFRS Page2 */
DMA3CR                   DATA       00ABH     ;/*SFRS Page2 */
DMA3MA                   DATA       00ACH     ;/*SFRS Page2 */
DMA3CNT                  DATA       00ADH     ;/*SFRS Page2 */
DMA3CCNT                 DATA       00AEH     ;/*SFRS Page2 */
MTM3DA                   DATA       00AFH     ;/*SFRS Page2 */

DMA2TSR                  DATA       00B1H     ;/*SFRS Page2 */
DMA2BAH                  DATA       00B2H     ;/*SFRS Page2 */
DMA2CR                   DATA       00B3H     ;/*SFRS Page2 */
DMA2MA                   DATA       00B4H     ;/*SFRS Page2 */
DMA2CNT                  DATA       00B5H     ;/*SFRS Page2 */
DMA2CCNT                 DATA       00B6H     ;/*SFRS Page2 */
MTM2DA                   DATA       00B7H     ;/*SFRS Page2 */

PWM2PH                   DATA       00B9H     ;/*SFRS Page2 */
PWM2C0H                  DATA       00BAH     ;/*SFRS Page2 */
PWM2C1H                  DATA       00BBH     ;/*SFRS Page2 */
PWM2MD                   DATA       00BCH     ;/*SFRS Page2 */
PWM2MEN                  DATA       00BDH     ;/*SFRS Page2 */
RWKH                     DATA       00BFH     ;/*SFRS Page2 */

PWM2PL                   DATA       00C1H     ;/*SFRS Page2 */
PWM2C0L                  DATA       00C2H     ;/*SFRS Page2 */
PWM2C1L                  DATA       00C3H     ;/*SFRS Page2 */
PWM2CON0                 DATA       00C4H     ;/*SFRS Page2 */
PWM2CON1                 DATA       00C5H     ;/*SFRS Page2 */
PWM2INTC                 DATA       00C6H     ;/*SFRS Page2 */

PWM3PH                   DATA       00C9H     ;/*SFRS Page2 */
PWM3C0H                  DATA       00CAH     ;/*SFRS Page2 */
PWM3C1H                  DATA       00CBH     ;/*SFRS Page2 */
PWM3MD                   DATA       00CCH     ;/*SFRS Page2 */
PWM3MEN                  DATA       00CDH     ;/*SFRS Page2 */
AINDIDS1                 DATA       00CEH     ;/*SFRS Page2 */
I2C0ADDRM                DATA       00CFH     ;/*SFRS Page2 */

PWM3PL                   DATA       00D1H     ;/*SFRS Page2 */
PWM3C0L                  DATA       00D2H     ;/*SFRS Page2 */
PWM3C1L                  DATA       00D3H     ;/*SFRS Page2 */
PWM3CON0                 DATA       00D4H     ;/*SFRS Page2 */
PWM3CON1                 DATA       00D5H     ;/*SFRS Page2 */
PWM3INTC                 DATA       00D6H     ;/*SFRS Page2 */
I2C1ADDRM                DATA       00D7H     ;/*SFRS Page2 */

SC1DR                    DATA       00D9H     ;/*SFRS Page2 */
SC1EGT                   DATA       00DAH     ;/*SFRS Page2 */
SC1ETURD0                DATA       00DBH     ;/*SFRS Page2 */
SC1ETURD1                DATA       00DCH     ;/*SFRS Page2 */
SC1IE                    DATA       00DDH     ;/*SFRS Page2 */
SC1IS                    DATA       00DEH     ;/*SFRS Page2 */
SC1TSR                   DATA       00DFH     ;/*SFRS Page2 */

P5MF32                   DATA       00E1H     ;/*SFRS Page2 */
P5MF54                   DATA       00E2H     ;/*SFRS Page2 */
P5MF76                   DATA       00E3H     ;/*SFRS Page2 */
BRCTRIM                  DATA       00E4H     ;/*SFRS Page2 */
ADCCAL                   DATA       00E5H     ;/*SFRS Page2 */
SC1CR0                   DATA       00E6H     ;/*SFRS Page2 */
SC1CR1                   DATA       00E7H     ;/*SFRS Page2 */

P3MF54                   DATA       00E9H     ;/*SFRS Page2 */
P3MF76                   DATA       00EAH     ;/*SFRS Page2 */
P4MF10                   DATA       00EBH     ;/*SFRS Page2 */
P4MF32                   DATA       00ECH     ;/*SFRS Page2 */
P4MF54                   DATA       00EDH     ;/*SFRS Page2 */
P4MF76                   DATA       00EEH     ;/*SFRS Page2 */
P5MF10                   DATA       00EFH     ;/*SFRS Page2 */

P1MF76                   DATA       00F1H     ;/*SFRS Page2 */
P2MF10                   DATA       00F2H     ;/*SFRS Page2 */
P2MF32                   DATA       00F3H     ;/*SFRS Page2 */
P2MF54                   DATA       00F4H     ;/*SFRS Page2 */
P2MF76                   DATA       00F5H     ;/*SFRS Page2 */
P3MF10                   DATA       00F6H     ;/*SFRS Page2 */
P3MF32                   DATA       00F7H     ;/*SFRS Page2 */

P0MF10                   DATA       00F9H     ;/*SFRS Page2 */
P0MF32                   DATA       00FAH     ;/*SFRS Page2 */
P0MF54                   DATA       00FBH     ;/*SFRS Page2 */
P0MF76                   DATA       00FCH     ;/*SFRS Page2 */
P1MF10                   DATA       00FDH     ;/*SFRS Page2 */
P1MF32                   DATA       00FEH     ;/*SFRS Page2 */
P1MF54                   DATA       00FFH     ;/*SFRS Page2 */

;/*L56 SFR BYTE page 3  */      
DMA0CR1                  DATA       008AH     ;/*SFRS Page3 */
DMA1CR1                  DATA       008BH     ;/*SFRS Page3 */
DMA2CR1                  DATA       008CH     ;/*SFRS Page3 */
DMA3CR1                  DATA       008DH     ;/*SFRS Page3 */

DMA0CRC                  DATA       0092H     ;/*SFRS Page3 */
DMA1CRC                  DATA       0093H     ;/*SFRS Page3 */
DMA2CRC                  DATA       0094H     ;/*SFRS Page3 */
DMA3CRC                  DATA       0095H     ;/*SFRS Page3 */

DMA0SEED                 DATA       009AH     ;/*SFRS Page3 */
DMA1SEED                 DATA       009BH     ;/*SFRS Page3 */
DMA2SEED                 DATA       009CH     ;/*SFRS Page3 */
DMA3SEED                 DATA       009DH     ;/*SFRS Page3 */

RTCINIT                  DATA       00A1H     ;/*SFRS Page3 */
RTCRWEN                  DATA       00A2H     ;/*SFRS Page3 */
RTCCLKSEL                DATA       00A3H     ;/*SFRS Page3 */
RTCFREQADJ0              DATA       00A4H     ;/*SFRS Page3 */
RTCFREQADJ1              DATA       00A5H     ;/*SFRS Page3 */
RTCINTEN                 DATA       00A6H     ;/*SFRS Page3 */
RTCINTSTS                DATA       00A7H     ;/*SFRS Page3 */

RTCTIMESEC               DATA       00A9H     ;/*SFRS Page3 */
RTCTIMEMIN               DATA       00AAH     ;/*SFRS Page3 */
RTCTIMEHR                DATA       00ABH     ;/*SFRS Page3 */
RTCTIMEHZ                DATA       00ACH     ;/*SFRS Page3 */
RTCCALDAY                DATA       00ADH     ;/*SFRS Page3 */
RTCCALMON                DATA       00AEH     ;/*SFRS Page3 */
RTCCALYEAR               DATA       00AFH     ;/*SFRS Page3 */

RTCTALMSEC               DATA       00B1H     ;/*SFRS Page3 */
RTCTALMMIN               DATA       00B2H     ;/*SFRS Page3 */
RTCTALMHR                DATA       00B3H     ;/*SFRS Page3 */
RTCTALMHZ                DATA       00B4H     ;/*SFRS Page3 */
RTCCALMDAY               DATA       00B5H     ;/*SFRS Page3 */
RTCCALMMON               DATA       00B6H     ;/*SFRS Page3 */
RTCCALMYEAR              DATA       00B7H     ;/*SFRS Page3 */

RTCCLKFMT                DATA       00B9H     ;/*SFRS Page3 */
RTCCLKTEST               DATA       00BAH     ;/*SFRS Page3 */
RTCWEEKDAY               DATA       00BBH     ;/*SFRS Page3 */
RTCLEAPYEAR              DATA       00BCH     ;/*SFRS Page3 */
RTCTICK                  DATA       00BDH     ;/*SFRS Page3 */
RTCTAMSK                 DATA       00BEH     ;/*SFRS Page3 */
RTCCAMSK                 DATA       00BFH     ;/*SFRS Page3 */

PWM0FBS                  DATA       00CEH     ;/*SFRS Page3 */
AUXR3                    DATA       00CFH     ;/*SFRS Page3 */

LCDCPUMP                 DATA       00F1H     ;/*SFRS Page3 */
LCDSEG0                  DATA       00F2H     ;/*SFRS Page3 */
LCDSEG1                  DATA       00F3H     ;/*SFRS Page3 */
LCDSEG2                  DATA       00F4H     ;/*SFRS Page3 */
LCDSEG3                  DATA       00F5H     ;/*SFRS Page3 */

LCDCON                   DATA       00F9H     ;/*SFRS Page3 */
LCDCLK                   DATA       00FAH     ;/*SFRS Page3 */
LCDPTR                   DATA       00FBH     ;/*SFRS Page3 */
LCDDAT                   DATA       00FCH     ;/*SFRS Page3 */
LCDPWR                   DATA       00FDH     ;/*SFRS Page3 */
LCDBL                    DATA       00FEH     ;/*SFRS Page3 */
LCDRESBUF                DATA       00FFH     ;/*SFRS Page3 */


;----------------- 
; BIT Registers    
;----------------- 
       
P00       BIT           P0.0
P01       BIT           P0.1
P02       BIT           P0.2
P03       BIT           P0.3
P04       BIT           P0.4
P05       BIT           P0.5
P06       BIT           P0.6
P07       BIT           P0.7
          BIT           
TF1       BIT           TCON.7
TR1       BIT           TCON.6
TF0       BIT           TCON.5
TR0       BIT           TCON.4
IE1       BIT           TCON.3
IT1       BIT           TCON.2
IE0       BIT           TCON.1
IT0       BIT           TCON.0
          BIT           
P10       BIT           P1.0
P11       BIT           P1.1
P12       BIT           P1.2
P13       BIT           P1.3
P14       BIT           P1.4
P15       BIT           P1.5
P16       BIT           P1.6
P17       BIT           P1.7
          BIT           
SM0       BIT           SCON.7
FE        BIT           SCON.7
SM1       BIT           SCON.6
SM2       BIT           SCON.5
REN       BIT           SCON.4
TB8       BIT           SCON.3
RB8       BIT           SCON.2
TI        BIT           SCON.1
RI        BIT           SCON.0
          BIT           
P20       BIT           P2.0
P21       BIT           P2.1
P22       BIT           P2.2
P23       BIT           P2.3
P24       BIT           P2.4
P25       BIT           P2.5
P26       BIT           P2.6
P27       BIT           P2.7
          BIT           
EA        BIT           IE.7
EADC      BIT           IE.6
EBOD      BIT           IE.5
ES        BIT           IE.4
ET1       BIT           IE.3
EX1       BIT           IE.2
ET0       BIT           IE.1
EX0       BIT           IE.0
          BIT           
P30       BIT           P3.0
P31       BIT           P3.1
P32       BIT           P3.2
P33       BIT           P3.3
P34       BIT           P3.4
P35       BIT           P3.5
P36       BIT           P3.6
P37       BIT           P3.7
          BIT           
PADC      BIT           IP.6
PBOD      BIT           IP.5
PS        BIT           IP.4
PT1       BIT           IP.3
PX1       BIT           IP.2
PT0       BIT           IP.1
PX0       BIT           IP.0
          BIT           
I2CEN0    BIT           I2C0CON.6
STA0      BIT           I2C0CON.5
STO0      BIT           I2C0CON.4
SI0       BIT           I2C0CON.3
AA0       BIT           I2C0CON.2
I2C0PX    BIT           I2C0CON.0
          BIT           
I2CEN1    BIT           I2C1CON.6
STA1      BIT           I2C1CON.5
STO1      BIT           I2C1CON.4
SI1       BIT           I2C1CON.3
AA1       BIT           I2C1CON.2
I2CPX1    BIT           I2C1CON.0
          BIT           
TF2       BIT           T2CON.7
TR2       BIT           T2CON.2
CM_RL2    BIT           T2CON.0
          BIT           
CY        BIT           PSW.7
AC        BIT           PSW.6
F0        BIT           PSW.5
RS1       BIT           PSW.4
RS0       BIT           PSW.3
OV        BIT           PSW.2
P         BIT           PSW.0
          BIT           
P40       BIT           P4.0
P41       BIT           P4.1
P42       BIT           P4.2
P43       BIT           P4.3
P44       BIT           P4.4
P45       BIT           P4.5
P46       BIT           P4.6
P47       BIT           P4.7
          BIT           
SM0_1     BIT           S1CON.7
FE_1      BIT           S1CON.7
SM1_1     BIT           S1CON.6
SM2_1     BIT           S1CON.5
REN_1     BIT           S1CON.4
TB8_1     BIT           S1CON.3
RB8_1     BIT           S1CON.2
TI_1      BIT           S1CON.1
RI_1      BIT           S1CON.0
          BIT           
AIN0      BIT           P2.5
AIN1      BIT           P2.4
AIN2      BIT           P2.3
AIN3      BIT           P2.2
AIN4      BIT           P2.1
AIN5      BIT           P2.0
AIN6      BIT           P3.1
AIN7      BIT           P3.2
          BIT           
ACMP_P0   BIT           P2.5
ACMP_P1   BIT           P2.3
ACMP_P2   BIT           P2.1
ACMP_P3   BIT           P3.0
          BIT           
ACMP0_N0  BIT           P2.4
ACMP0_N1  BIT           P2.0
ACMP1_N0  BIT           P2.2
ACMP1_N1  BIT           P3.1

