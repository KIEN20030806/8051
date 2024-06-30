;--------------------------------------------------------------------------
;	ML51.inc
;	Header file for Nuvoton ML51 Series
;	2020/02/24
;--------------------------------------------------------------------------

P0          DATA     0080H         ;All page
SP          DATA     0081H         ;All page
DPL         DATA     0082H         ;All page
DPH         DATA     0083H         ;All page
RCTRIM0     DATA     0084H         ;SFR page 0 TA Protection
RCTRIM1     DATA     0085H         ;SFR page 0 TA Protection
RWK         DATA     0086H         ;SFR page 0
PCON        DATA     0087H         ;All page
        
TCON        DATA     0088H         ;All page
TMOD        DATA     0089H         ;SFR page 0
TL0         DATA     008AH         ;SFR page 0
TL1         DATA     008BH         ;SFR page 0
TH0         DATA     008CH         ;SFR page 0
TH1         DATA     008DH         ;SFR page 0
CKCON       DATA     008EH         ;SFR page 0
WKCON       DATA     008FH         ;SFR page 0
        
P1          DATA     0090H         ;All page
SFRS        DATA     0091H         ;All page
DMA0CR      DATA     0092H         ;SFR page 0
DMA0MA      DATA     0093H         ;SFR page 0
DMA0CNT     DATA     0094H         ;SFR page 0
DMA0CCNT    DATA     0095H         ;SFR page 0
CKSWT       DATA     0096H         ;SFR page 0 TA Protection
CKEN        DATA     0097H         ;SFR page 0 TA Protection
                                               
SCON        DATA     0098H         ;All page   
SBUF        DATA     0099H         ;SFR page 0 
SBUF1       DATA     009AH         ;SFR page 0 
EIE0        DATA     009BH         ;SFR page 0 
EIE1        DATA     009CH         ;SFR page 0 
RSR         DATA     009DH         ;SFR page 0 
IAPTC       DATA     009EH         ;SFR page 0 TA Protection
CHPCON      DATA     009FH         ;All page   TA Protection
                                               
P2          DATA     00A0H         ;All page   
ADCCON0     DATA     00A1H         ;SFR page 0 
AUXR0       DATA     00A2H         ;SFR page 0 
BODCON0     DATA     00A3H         ;SFR page 0 TA Protection
IAPTRG      DATA     00A4H         ;SFR page 0 TA Protection
IAPUEN      DATA     00A5H         ;SFR page 0 TA Protection
IAPAL       DATA     00A6H         ;SFR page 0
IAPAH       DATA     00A7H         ;SFR page 0
         
IE          DATA     00A8H         ;All page
SADDR       DATA     00A9H         ;SFR page 0
WDCON       DATA     00AAH         ;SFR page 0 TA Protection
BODCON1     DATA     00ABH         ;SFR page 0 TA Protection
EIP2        DATA     00ACH         ;SFR page 0
EIPH2       DATA     00ADH         ;SFR page 0
IAPFD       DATA     00AEH         ;SFR page 0
IAPCN       DATA     00AFH         ;SFR page 0
         
P3          DATA     00B0H         ;All page
P5          DATA     00B1H         ;SFR page 0
I2C1ADDR0   DATA     00B2H         ;SFR page 0
I2C1DAT     DATA     00B3H         ;SFR page 0
I2C1STAT    DATA     00B4H         ;SFR page 0
I2C1CLK     DATA     00B5H         ;SFR page 0
I2C1TOC     DATA     00B6H         ;SFR page 0
IPH         DATA     00B7H         ;SFR page 0

IP          DATA     00B8H         ;All page
SADEN       DATA     00B9H         ;SFR page 0
SADEN1      DATA     00BAH         ;SFR page 0
SADDR1      DATA     00BBH         ;SFR page 0
I2C0DAT     DATA     00BCH         ;SFR page 0
I2C0STAT    DATA     00BDH         ;SFR page 0
I2C0CLK     DATA     00BEH         ;SFR page 0
I2C0TOC     DATA     00BFH         ;SFR page 0

I2C0CON     DATA     00C0H         ;All page
I2C0ADDR0   DATA     00C1H         ;SFR page 0
ADCRL       DATA     00C2H         ;SFR page 0
ADCRH       DATA     00C3H         ;SFR page 0
T3CON       DATA     00C4H         ;SFR page 0
RL3         DATA     00C5H         ;SFR page 0
RH3         DATA     00C6H         ;SFR page 0
TA          DATA     00C7H         ;All page

T2CON       DATA     00C8H         ;All page
T2MOD       DATA     00C9H         ;SFR page 0
PIF         DATA     00CAH         ;SFR page 0
ADCBAL      DATA     00CBH         ;SFR page 0
TL2         DATA     00CCH         ;SFR page 0
TH2         DATA     00CDH         ;SFR page 0
ADCMPL      DATA     00CEH         ;SFR page 0
ADCMPH      DATA     00CFH         ;SFR page 0

PSW         DATA     00D0H         ;All page
PWM0CON0    DATA     00D1H         ;SFR page 0
ACMPCR0     DATA     00D2H         ;SFR page 0
ACMPCR1     DATA     00D3H         ;SFR page 0
ACMPSR      DATA     00D4H         ;SFR page 0
ACMPVREF    DATA     00D5H         ;SFR page 0
SC0CR0      DATA     00D6H         ;SFR page 0
SC0CR1      DATA     00D7H         ;SFR page 0

P4          DATA     00D8H         ;All page
SC0DR       DATA     00D9H         ;SFR page 0
SC0EGT      DATA     00DAH         ;SFR page 0
SC0ETURD0   DATA     00DBH         ;SFR page 0
SC0ETURD1   DATA     00DCH         ;SFR page 0
SC0IE       DATA     00DDH         ;SFR page 0
SC0IS       DATA     00DEH         ;SFR page 0
SC0TSR      DATA     00DFH         ;SFR page 0

ACC         DATA     00E0H         ;All page
ADCCON1     DATA     00E1H         ;SFR page 0
ADCCON2     DATA     00E2H         ;SFR page 0
ADCDLY      DATA     00E3H         ;SFR page 0
ADCBAH      DATA     00E4H         ;SFR page 0
ADCSN       DATA     00E5H         ;SFR page 0
ADCCN       DATA     00E6H         ;SFR page 0
ADCSR       DATA     00E7H         ;SFR page 0

I2C1CON     DATA     00E8H         ;All page
DMA0TSR     DATA     00E9H         ;SFR page 0
MTM0DA      DATA     00EAH         ;SFR page 0
DMA1CR      DATA     00EBH         ;SFR page 0
DMA1MA      DATA     00ECH         ;SFR page 0
DMA1CNT     DATA     00EDH         ;SFR page 0
DMA1CCNT    DATA     00EEH         ;SFR page 0
EIP0        DATA     00EFH         ;SFR page 0

B           DATA     00F0H         ;All page
DMA1TSR     DATA     00F1H         ;SFR page 0
MTM1DA      DATA     00F2H         ;SFR page 0
SPI0CR0     DATA     00F3H         ;SFR page 0
SPI0SR      DATA     00F4H         ;SFR page 0
SPI0DR      DATA     00F5H         ;SFR page 0
DMA0BAH     DATA     00F6H         ;SFR page 0
EIPH0       DATA     00F7H         ;SFR page 0

S1CON       DATA     00F8H         ;All page
SPI1CR0     DATA     00F9H         ;SFR page 0
SPI1CR1     DATA     00FAH         ;SFR page 0
SPI1SR      DATA     00FBH         ;SFR page 0
SPI1DR      DATA     00FCH         ;SFR page 0
DMA1BAH     DATA     00FDH         ;SFR page 0
EIP1        DATA     00FEH         ;SFR page 0
EIPH1       DATA     00FFH         ;SFR page 0

;SFR page 1 
        
LIRCTRIM    DATA     0084H         ;A Protection
XLTCON      DATA     0085H         ;
CWK         DATA     0086H         ;

P0DW        DATA     008AH         ;SFR page 1
P1DW        DATA     008BH         ;SFR page 1
P2DW        DATA     008CH         ;SFR page 1
P3DW        DATA     008DH         ;SFR page 1
P4DW        DATA     008EH         ;SFR page 1
P5DW        DATA     008FH         ;SFR page 1

P0UP        DATA     0092H         ;SFR page 1
P1UP        DATA     0093H         ;SFR page 1
P2UP        DATA     0094H         ;SFR page 1
P3UP        DATA     0095H         ;SFR page 1
P4UP        DATA     0096H         ;SFR page 1
P5UP        DATA     0097H         ;SFR page 1

P0S         DATA     0099H         ;SFR page 1
P0SR        DATA     009AH         ;SFR page 1
P1S         DATA     009BH         ;SFR page 1
P1SR        DATA     009CH         ;SFR page 1
P2S         DATA     009DH         ;SFR page 1
P2SR        DATA     009EH         ;SFR page 1

PIPS0       DATA     00A1H         ;SFR page 1
PIPS1       DATA     00A2H         ;SFR page 1
PIPS2       DATA     00A3H         ;SFR page 1
PIPS3       DATA     00A4H         ;SFR page 1
PIPS4       DATA     00A5H         ;SFR page 1
PIPS5       DATA     00A6H         ;SFR page 1
PIPS6       DATA     00A7H         ;SFR page 1

VRFCON      DATA     00A9H         ;SFR page 1
VRFTRIM     DATA     00AAH         ;SFR page 1 TA Protection
ACMPCR2     DATA     00ABH         ;SFR page 1
P3S         DATA     00ACH         ;SFR page 1
P3SR        DATA     00ADH         ;SFR page 1
P5SR        DATA     00AEH         ;SFR page 1
PIPS7       DATA     00AFH         ;SFR page 1

P0M1        DATA     00B1H         ;SFR page 1
P0M2        DATA     00B2H         ;SFR page 1
P1M1        DATA     00B3H         ;SFR page 1
P1M2        DATA     00B4H         ;SFR page 1
P2M1        DATA     00B5H         ;SFR page 1
P2M2        DATA     00B6H         ;SFR page 1
PWM0INTC    DATA     00B7H         ;SFR page 1

P4M1        DATA     00B9H         ;SFR page 1
P4M2        DATA     00BAH         ;SFR page 1
P4S         DATA     00BBH         ;SFR page 1
P4SR        DATA     00BCH         ;SFR page 1
P5M1        DATA     00BDH         ;SFR page 1
P5M2        DATA     00BEH         ;SFR page 1
P5S         DATA     00BFH         ;SFR page 1

CKDIV       DATA     00C1H         ;SFR page 1
P3M1        DATA     00C2H         ;SFR page 1
P3M2        DATA     00C3H         ;SFR page 1
PWM0C4H     DATA     00C4H         ;SFR page 1
PWM0C5H     DATA     00C5H         ;SFR page 1
PORDIS      DATA     00C6H         ;SFR page 1//TA Protection

AUXR1       DATA     00C9H         ;SFR page 1
RCMP2L      DATA     00CAH         ;SFR page 1
RCMP2H      DATA     00CBH         ;SFR page 1
PWM0C4L     DATA     00CCH         ;SFR page 1
PWM0C5L     DATA     00CDH         ;SFR page 1
AINDIDS     DATA     00CEH         ;SFR page 1

PWM0PH      DATA     00D1H         ;SFR page 1
PWM0C0H     DATA     00D2H         ;SFR page 1
PWM0C1H     DATA     00D3H         ;SFR page 1
PWM0C2H     DATA     00D4H         ;SFR page 1
PWM0C3H     DATA     00D5H         ;SFR page 1
PWM0NP      DATA     00D6H         ;SFR page 1
PWM0FBD     DATA     00D7H         ;SFR page 1

PWM0PL      DATA     00D9H         ;SFR page 1
PWM0C0L     DATA     00DAH         ;SFR page 1
PWM0C1L     DATA     00DBH         ;SFR page 1
PWM0C2L     DATA     00DCH         ;SFR page 1
PWM0C3L     DATA     00DDH         ;SFR page 1
PIOCON0     DATA     00DEH         ;SFR page 1
PWM0CON1    DATA     00DFH         ;SFR page 1

CAPCON0     DATA     00E1H         ;SFR page 1
CAPCON1     DATA     00E2H         ;SFR page 1
CAPCON2     DATA     00E3H         ;SFR page 1
C0L         DATA     00E4H         ;SFR page 1
C0H         DATA     00E5H         ;SFR page 1
C1L         DATA     00E6H         ;SFR page 1
C1H         DATA     00E7H         ;SFR page 1

PICON       DATA     00E9H         ;SFR page 1
PINEN       DATA     00EAH         ;SFR page 1
PIPEN       DATA     00EBH         ;SFR page 1
BCKCON      DATA     00ECH         ;SFR page 1
C2L         DATA     00EDH         ;SFR page 1
C2H         DATA     00EEH         ;SFR page 1
LDOTRIM     DATA     00EFH         ;SFR page 1 //TA Protection

CAPCON3     DATA     00F1H         ;SFR page 1
CAPCON4     DATA     00F2H         ;SFR page 1
SPI0CR1     DATA     00F3H         ;SFR page 1
AUXR2       DATA     00F4H         ;SFR page 1
LDOOEN      DATA     00F5H         ;SFR page 1
ROMMAP11    DATA     00F6H         ;SFR page 1 //Don't release & TA Protection

PWM0DTEN    DATA     00F9H         ;SFR page 1
PWM0DTCNT   DATA     00FAH         ;SFR page 1
PWM0MEN     DATA     00FBH         ;SFR page 1
PWM0MD      DATA     00FCH         ;SFR page 1
LVRFLTEN    DATA     00FDH         ;SFR page 1 //TA Protection
RCNT        DATA     00FEH         ;SFR page 1 //Don't release & TA Protection
LVRDIS      DATA     00FFH         ;SFR page 1 //TA Protection

;SFR page 2  DATA           
I2C0ADDR1   DATA     00A1H         ;SFR page 2
I2C0ADDR2   DATA     00A2H         ;SFR page 2
I2C0ADDR3   DATA     00A3H         ;SFR page 2
I2C1ADDR1   DATA     00A4H         ;SFR page 2
I2C1ADDR2   DATA     00A5H         ;SFR page 2
I2C1ADDR3   DATA     00A6H         ;SFR page 2

DMA3TSR     DATA     00A9H         ;SFR page 2
DMA3BAH     DATA     00AAH         ;SFR page 2
DMA3CR      DATA     00ABH         ;SFR page 2
DMA3MA      DATA     00ACH         ;SFR page 2
DMA3CNT     DATA     00ADH         ;SFR page 2
DMA3CCNT    DATA     00AEH         ;SFR page 2
MTM3DA      DATA     00AFH         ;SFR page 2

DMA2TSR     DATA     00B1H         ;SFR page 2
DMA2BAH     DATA     00B2H         ;SFR page 2
DMA2CR      DATA     00B3H         ;SFR page 2
DMA2MA      DATA     00B4H         ;SFR page 2
DMA2CNT     DATA     00B5H         ;SFR page 2
DMA2CCNT    DATA     00B6H         ;SFR page 2
MTM2DA      DATA     00B7H         ;SFR page 2

PWM1IOCON   DATA     00B9H         ;SFR page 2
PWM1NP      DATA     00BAH         ;SFR page 2
PWM1FBD     DATA     00BBH         ;SFR page 2
PWM1INTC    DATA     00BCH         ;SFR page 2

PWM1DTEN    DATA     00C1H         ;SFR page 2
PWM1DTCNT   DATA     00C2H         ;SFR page 2
PWM1MEN     DATA     00C3H         ;SFR page 2
PWM1MD      DATA     00C4H         ;SFR page 2
PWM1CON0    DATA     00C5H         ;SFR page 2
PWM1CON1    DATA     00C6H         ;SFR page 2

PWM1PH      DATA     00C9H         ;SFR page 2
PWM1C0H     DATA     00CAH         ;SFR page 2
PWM1C1H     DATA     00CBH         ;SFR page 2
PWM1C2H     DATA     00CCH         ;SFR page 2
PWM1C3H     DATA     00CDH         ;SFR page 2
PWM1C4H     DATA     00CEH         ;SFR page 2
PWM1C5H     DATA     00CFH         ;SFR page 2

PWM1PL      DATA     00D1H         ;SFR page 2
PWM1C0L     DATA     00D2H         ;SFR page 2
PWM1C1L     DATA     00D3H         ;SFR page 2
PWM1C2L     DATA     00D4H         ;SFR page 2
PWM1C3L     DATA     00D5H         ;SFR page 2
PWM1C4L     DATA     00D6H         ;SFR page 2
PWM1C5L     DATA     00D7H         ;SFR page 2

SC1DR       DATA     00D9H         ;SFR page 2
SC1EGT      DATA     00DAH         ;SFR page 2
SC1ETURD0   DATA     00DBH         ;SFR page 2
SC1ETURD1   DATA     00DCH         ;SFR page 2
SC1IE       DATA     00DDH         ;SFR page 2
SC1IS       DATA     00DEH         ;SFR page 2
SC1TSR      DATA     00DFH         ;SFR page 2

P5MF32      DATA     00E1H         ;SFR page 2
P5MF54      DATA     00E2H         ;SFR page 2
P5MF76      DATA     00E3H         ;SFR page 2
ADCCALI     DATA     00E5H         ;SFR page 2
SC1CR0      DATA     00E6H         ;SFR page 2
SC1CR1      DATA     00E7H         ;SFR page 2

P3MF54      DATA     00E9H         ;SFR page 2
P3MF76      DATA     00EAH         ;SFR page 2
P4MF10      DATA     00EBH         ;SFR page 2
P4MF32      DATA     00ECH         ;SFR page 2
P4MF54      DATA     00EDH         ;SFR page 2
P4MF76      DATA     00EEH         ;SFR page 2
P5MF10      DATA     00EFH         ;SFR page 2

P1MF76      DATA     00F1H         ;SFR page 2
P2MF10      DATA     00F2H         ;SFR page 2
P2MF32      DATA     00F3H         ;SFR page 2
P2MF54      DATA     00F4H         ;SFR page 2
P2MF76      DATA     00F5H         ;SFR page 2
P3MF10      DATA     00F6H         ;SFR page 2
P3MF32      DATA     00F7H         ;SFR page 2

P0MF10      DATA     00F9H         ;SFR page 2
P0MF32      DATA     00FAH         ;SFR page 2
P0MF54      DATA     00FBH         ;SFR page 2
P0MF76      DATA     00FCH         ;SFR page 2
P1MF10      DATA     00FDH         ;SFR page 2
P1MF32      DATA     00FEH         ;SFR page 2
P1MF54      DATA     00FFH         ;SFR page 2

;----------------- 
; BIT Registers    
;----------------- 
          
P07         BIT      P0.7
P06         BIT      P0.6
P05         BIT      P0.5
P04         BIT      P0.4
P03         BIT      P0.3
P02         BIT      P0.2
P01         BIT      P0.1
P00         BIT      P0.0

TF1         BIT      TCON.7
TR1         BIT      TCON.6
TF0         BIT      TCON.5
TR0         BIT      TCON.4
IE1         BIT      TCON.3
IT1         BIT      TCON.2
IE0         BIT      TCON.1
IT0         BIT      TCON.0

P17         BIT      P1.7
P16         BIT      P1.6
P15         BIT      P1.5
P14         BIT      P1.4
P13         BIT      P1.3
P12         BIT      P1.2
P11         BIT      P1.1
P10         BIT      P1.0

SM0         BIT      SCON.7
FE          BIT      SCON.7
SM1         BIT      SCON.6
SM2         BIT      SCON.5
REN         BIT      SCON.4
TB8         BIT      SCON.3
RB8         BIT      SCON.2
TI          BIT      SCON.1
RI          BIT      SCON.0

P27         BIT      P2.7
P26         BIT      P2.6
P25         BIT      P2.5
P24         BIT      P2.4
P23         BIT      P2.3
P22         BIT      P2.2
P21         BIT      P2.1
P20         BIT      P2.0

EA          BIT      IE.7
EADC        BIT      IE.6
EBOD        BIT      IE.5
ES          BIT      IE.4
ET1         BIT      IE.3
EX1         BIT      IE.2
ET0         BIT      IE.1
EX0         BIT      IE.0

P37         BIT      P3.7
P36         BIT      P3.6
P35         BIT      P3.5
P34         BIT      P3.4
P33         BIT      P3.3
P32         BIT      P3.2
P31         BIT      P3.1
P30         BIT      P3.0 

PADC        BIT      IP.6
PBOD        BIT      IP.5
PS          BIT      IP.4
PT1         BIT      IP.3
PX1         BIT      IP.2
PT0         BIT      IP.1
PX0         BIT      IP.0

I2C0EN      BIT      I2C0CON.6
STA0        BIT      I2C0CON.5
STO0        BIT      I2C0CON.4
SI0         BIT      I2C0CON.3
AA0         BIT      I2C0CON.2

TF2         BIT      T2CON.7
TR2         BIT      T2CON.2
CM_RL2      BIT      T2CON.0

CY          BIT      PSW.7
AC          BIT      PSW.6
F0          BIT      PSW.5
RS1         BIT      PSW.4
RS0         BIT      PSW.3
OV          BIT      PSW.2
P           BIT      PSW.0

P47         BIT      P4.7
P46         BIT      P4.6
P45         BIT      P4.5
P44         BIT      P4.4
P43         BIT      P4.3
P42         BIT      P4.2
P41         BIT      P4.1
P40         BIT      P4.0

I2C1EN      BIT      I2C1CON.6
STA1        BIT      I2C1CON.5
STO1        BIT      I2C1CON.4
SI1         BIT      I2C1CON.3
AA1         BIT      I2C1CON.2

SM0_1       BIT      S1CON.7
FE_1        BIT      S1CON.7
SM1_1       BIT      S1CON.6
SM2_1       BIT      S1CON.5
REN_1       BIT      S1CON.4
TB8_1       BIT      S1CON.3
RB8_1       BIT      S1CON.2
TI_1        BIT      S1CON.1
RI_1        BIT      S1CON.0

AIN0        BIT      P2.5
AIN1        BIT      P2.4
AIN2        BIT      P2.3
AIN3        BIT      P2.2
AIN4        BIT      P2.1
AIN5        BIT      P2.0
AIN6        BIT      P3.1
AIN7        BIT      P3.2

ACMP_P0     BIT      P2.5
ACMP_P1     BIT      P2.3
ACMP_P2     BIT      P2.1
ACMP_P3     BIT      P3.0

ACMP0_N0    BIT      P2.4
ACMP0_N1    BIT      P2.0
ACMP1_N0    BIT      P2.2
ACMP1_N1    BIT      P3.1


