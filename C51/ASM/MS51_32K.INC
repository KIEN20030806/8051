;------------------------------------------------------------------------------------
;	MS51_32K.inc                                                        
;	Header file for Nuvoton MS51FC0AE MS51XC0BE MS51EC0AE MS51TC0AE MS51PC0AE                                    
;	2020/02/24                                                         
;------------------------------------------------------------------------------------

; MS51_32K SFR BYTE page 0 
P0                DATA       0080H
SP                DATA       0081H
DPL               DATA       0082H
DPH               DATA       0083H
RCTRIM0           DATA       0084H
RCTRIM1           DATA       0085H
RWKL              DATA       0086H
PCON              DATA       0087H

TCON              DATA       0088H
TMOD              DATA       0089H
TL0               DATA       008AH
TL1               DATA       008BH
TH0               DATA       008CH
TH1               DATA       008DH
CKCON             DATA       008EH
WKCON             DATA       008FH

P1                DATA       0090H
SFRS              DATA       0091H
CAPCON0           DATA       0092H
CAPCON1           DATA       0093H
CAPCON2           DATA       0094H
CKDIV             DATA       0095H
CKSWT             DATA       0096H
CKEN              DATA       0097H

SCON              DATA       0098H
SBUF              DATA       0099H
SBUF_1            DATA       009AH
EIE               DATA       009BH
EIE1              DATA       009CH
CHPCON            DATA       009FH

P2                DATA       00A0H
AUXR1             DATA       00A2H
BODCON0           DATA       00A3H
IAPTRG            DATA       00A4H
IAPUEN            DATA       00A5H
IAPAL             DATA       00A6H
IAPAH             DATA       00A7H

IE                DATA       00A8H
SADDR             DATA       00A9H
WDCON             DATA       00AAH
BODCON1           DATA       00ABH
P3M1              DATA       00ACH
P3M2              DATA       00ADH
IAPFD             DATA       00AEH
IAPCN             DATA       00AFH

P3                DATA       00B0H
P0M1              DATA       00B1H
P0M2              DATA       00B2H
P1M1              DATA       00B3H
P1M2              DATA       00B4H
TOE               DATA       00B5H
IPH               DATA       00B7H

IP                DATA       00B8H
SADEN             DATA       00B9H
SADEN_1           DATA       00BAH
SADDR_1           DATA       00BBH
I2DAT             DATA       00BCH
I2STAT            DATA       00BDH
I2CLK             DATA       00BEH
I2TOC             DATA       00BFH

I2CON             DATA       00C0H
I2ADDR            DATA       00C1H
ADCRL             DATA       00C2H
ADCRH             DATA       00C3H
T3CON             DATA       00C4H
RL3               DATA       00C5H
RH3               DATA       00C6H
TA                DATA       00C7H

T2CON             DATA       00C8H
T2MOD             DATA       00C9H
RCMP2L            DATA       00CAH
RCMP2H            DATA       00CBH
TL2               DATA       00CCH
TH2               DATA       00CDH
ADCMPL            DATA       00CEH
ADCMPH            DATA       00CFH

PSW               DATA       00D0H
PWM0PH            DATA       00D1H
PWM0C0H           DATA       00D2H
PWM0C1H           DATA       00D3H
PWM0C2H           DATA       00D4H
PWM0C3H           DATA       00D5H
PNP               DATA       00D6H
PWM0FBD           DATA       00D7H

PWM0CON0          DATA       00D8H
PWM0PL            DATA       00D9H
PWM0C0L           DATA       00DAH
PWM0C1L           DATA       00DBH
PWM0C2L           DATA       00DCH
PWM0C3L           DATA       00DDH
PIOCON0           DATA       00DEH
PWM0CON1          DATA       00DFH

ACC               DATA       00E0H
ADCCON1           DATA       00E1H
ADCCON2           DATA       00E2H
ADCDLY            DATA       00E3H
C0L               DATA       00E4H
C0H               DATA       00E5H
C1L               DATA       00E6H
C1H               DATA       00E7H

ADCCON0           DATA       00E8H
PICON             DATA       00E9H
PINEN             DATA       00EAH
PIPEN             DATA       00EBH
PIF               DATA       00ECH
C2L               DATA       00EDH
C2H               DATA       00EEH
EIP               DATA       00EFH

B                 DATA       00F0H
CAPCON3           DATA       00F1H
CAPCON4           DATA       00F2H
SPCR              DATA       00F3H
SPSR              DATA       00F4H
SPDR              DATA       00F5H
AINDIDS0          DATA       =0xFH;
EIPH              DATA       00F7H

SCON_1            DATA       00F8H
PWM0DTEN          DATA       00F9H
PWM0DTCNT         DATA       00FAH
PWM0MEN           DATA       00FBH
PWM0MD            DATA       00FCH
PORDIS            DATA       00FDH
EIP1              DATA       00FEH
EIPH1             DATA       00FFH

; MS51_32K SFR BYTE page 1 
P3S               DATA       00ACH
P3SR              DATA       00ADH

P0S               DATA       00B1H
P0SR              DATA       00B2H
P1S               DATA       00B3H
P1SR              DATA       00B4H
PWM0INTC          DATA       00B7H

PWM0C4H           DATA       00C4H
PWM0C5H           DATA       00C5H
PIOCON1           DATA       00C6H

PWM0C4L           DATA       00CCH
PWM0C5L           DATA       00CDH

SPCR2             DATA       00F3H

LVRDIS            DATA       00FFH

; MS51_32K SFR BYTE page 2
ADCBAL            DATA       0084H
ADCBAH            DATA       0085H
ADCCON3           DATA       0086H

P2M1              DATA       0089H
P2M2              DATA       008AH
P2SR              DATA       008BH
P2S               DATA       008CH
ADCSN             DATA       008DH
ADCCN             DATA       008EH
ADCSR             DATA       008FH

P0UP              DATA       0092H
P1UP              DATA       0093H
P2UP              DATA       0094H
P3UP              DATA       0095H
RWKH              DATA       0097H

AINDIDS1          DATA       0099H
P0DW              DATA       009AH
P1DW              DATA       009BH
P2DW              DATA       009CH
P3DW              DATA       009DH

AUXR2             DATA       00A1H
AUXR3             DATA       00A2H
AUXR4             DATA       00A3H
AUXR5             DATA       00A4H
AUXR6             DATA       00A5H
AUXR7             DATA       00A6H
AUXR8             DATA       00A7H

PWM1PH            DATA       00A9H
PWM1C0H           DATA       00AAH
PWM1C1H           DATA       00ABH
PWM1MD            DATA       00ACH
PWM1MEN           DATA       00ADH

PWM1PL            DATA       00B1H
PWM1C0L           DATA       00B2H
PWM1C1L           DATA       00B3H
PWM1CON0          DATA       00B4H
PWM1CON1          DATA       00B5H
PWM1INTC          DATA       00B6H
PIOCON2           DATA       00B7H

PWM2PH            DATA       00B9H
PWM2C0H           DATA       00BAH
PWM2C1H           DATA       00BBH
PWM2MD            DATA       00BCH
PWM2MEN           DATA       00BDH

PWM2PL            DATA       00C1H
PWM2C0L           DATA       00C2H
PWM2C1L           DATA       00C3H
PWM2CON0          DATA       00C4H
PWM2CON1          DATA       00C5H
PWM2INTC          DATA       00C6H

PWM3PH            DATA       00C9H
PWM3C0H           DATA       00CAH
PWM3C1H           DATA       00CBH
PWM3MD            DATA       00CCH
PWM3MEN           DATA       00CDH
EIP2              DATA       00CEH
EIPH2             DATA       00CFH

PWM3PL            DATA       00D1H
PWM3C0L           DATA       00D2H
PWM3C1L           DATA       00D3H
PWM3CON0          DATA       00D4H
PWM3CON1          DATA       00D5H
PWM3INTC          DATA       00D6H
XTLCON            DATA       00D7H

SC0DR             DATA       00D9H
SC0EGT            DATA       00DAH
SC0ETURD0         DATA       00DBH
SC0ETURD1         DATA       00DCH
SC0IE             DATA       00DDH
SC0IS             DATA       00DEH
SC0TSR            DATA       00DFH

SC1DR             DATA       00E1H
SC1EGT            DATA       00E2H
SC1ETURD0         DATA       00E3H
SC1ETURD1         DATA       00E4H
SC1IE             DATA       00E5H
SC1IS             DATA       00E6H
SC1TSR            DATA       00E7H

SC2DR             DATA       00E9H
SC2EGT            DATA       00EAH
SC2ETURD0         DATA       00EBH
SC2ETURD1         DATA       00ECH
SC2IE             DATA       00EDH
SC2IS             DATA       00EEH
SC2TSR            DATA       00EFH

SC0CR0            DATA       00F1H
SC0CR1            DATA       00F2H
SC1CR0            DATA       00F3H
SC1CR1            DATA       00F4H
SC2CR0            DATA       00F5H
SC2CR1            DATA       00F6H
PIPS7             DATA       00F7H

PIPS0             DATA       00F9H
PIPS1             DATA       00FAH
PIPS2             DATA       00FBH
PIPS3             DATA       00FCH
PIPS4             DATA       00FDH
PIPS5             DATA       00FEH
PIPS6             DATA       00FFH

;-----------------
; BIT Registers 
;----------------- 
SM0_1             BIT       SCON_1^7;
FE_1              BIT       SCON_1^7; 
SM1_1             BIT       SCON_1^6; 
SM2_1             BIT       SCON_1^5; 
REN_1             BIT       SCON_1^4; 
TB8_1             BIT       SCON_1^3; 
RB8_1             BIT       SCON_1^2; 
TI_1              BIT       SCON_1^1; 
RI_1              BIT       SCON_1^0; 

ADCF              BIT       ADCCON0^7;
ADCS              BIT       ADCCON0^6;
ETGSEL1           BIT       ADCCON0^5;
ETGSEL0           BIT       ADCCON0^4;
ADCHS3            BIT       ADCCON0^3;
ADCHS2            BIT       ADCCON0^2;
ADCHS1            BIT       ADCCON0^1;
ADCHS0            BIT       ADCCON0^0;

PWMRUN            BIT       PWM0CON0^7;
LOAD              BIT       PWM0CON0^6;
PWMF              BIT       PWM0CON0^5;
CLRPWM            BIT       PWM0CON0^4;

CY                BIT       PSW^7;
AC                BIT       PSW^6;
F0                BIT       PSW^5;
RS1               BIT       PSW^4;
RS0               BIT       PSW^3;
OV                BIT       PSW^2;
P                 BIT       PSW^0;

TF2               BIT       T2CON^7;
TR2               BIT       T2CON^2;
CM_RL2            BIT       T2CON^0;

I2CEN             BIT       I2CON^6;
STA               BIT       I2CON^5;
STO               BIT       I2CON^4;
SI                BIT       I2CON^3;
AA                BIT       I2CON^2;
I2CPX             BIT       I2CON^0;

PADC              BIT       IP^6;
PBOD              BIT       IP^5;
PS                BIT       IP^4;
PT1               BIT       IP^3;
PX1               BIT       IP^2;
PT0               BIT       IP^1;
PX0               BIT       IP^0;

P37               BIT       P3^7;
P36               BIT       P3^6;
P35               BIT       P3^5;
P34               BIT       P3^4;
P33               BIT       P3^3;
P32               BIT       P3^2; 
P31               BIT       P3^1;
P30               BIT       P3^0;

EA                BIT       IE^7;
EADC              BIT       IE^6;
EBOD              BIT       IE^5;
ES                BIT       IE^4;
ET1               BIT       IE^3;
EX1               BIT       IE^2;
ET0               BIT       IE^1;
EX0               BIT       IE^0;

P20               BIT       P2^0;

SM0               BIT       SCON^7;
FE                BIT       SCON^7; 
SM1               BIT       SCON^6; 
SM2               BIT       SCON^5; 
REN               BIT       SCON^4; 
TB8               BIT       SCON^3; 
RB8               BIT       SCON^2; 
TI                BIT       SCON^1; 
RI                BIT       SCON^0; 

P17               BIT       P1^7;
P16               BIT       P1^6;
TXD_1             BIT       P1^6; 
P15               BIT       P1^5;
P14               BIT       P1^4;
SDA               BIT       P1^4;    
P13               BIT       P1^3;
SCL               BIT       P1^3;  
P12               BIT       P1^2; 
P11               BIT       P1^1;
P10               BIT       P1^0;

TF1               BIT       TCON^7;
TR1               BIT       TCON^6;
TF0               BIT       TCON^5;
TR0               BIT       TCON^4;
IE1               BIT       TCON^3;
IT1               BIT       TCON^2;
IE0               BIT       TCON^1;
IT0               BIT       TCON^0;

P07               BIT       P0^7;
RXD               BIT       P0^7;
P06               BIT       P0^6;
TXD               BIT       P0^6;
P05               BIT       P0^5;
P04               BIT       P0^4;
STADC             BIT       P0^4;
P03               BIT       P0^3;
P02               BIT       P0^2;
RXD_1             BIT       P0^2;
P01               BIT       P0^1;
MISO              BIT       P0^1;
P00               BIT       P0^0;
MOSI              BIT       P0^0;

