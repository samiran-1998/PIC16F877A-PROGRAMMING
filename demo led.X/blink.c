
; PIC16F877A Configuration Bit Settings

; Assembly source line config statements

#include "p16f877a.inc"

; CONFIG
; __config 0xFF3A
 __CONFIG _FOSC_HS & _WDTE_OFF & _PWRTE_OFF & _BOREN_OFF & _LVP_OFF & _CPD_OFF & _WRT_OFF & _CP_OFF

#define_XTAL_FREQ20000000
int main()
{
    TRISD1=0;
    while(1)
    {
        RD1=0x00;
        _delay_ms(100);
        RD1=0xff;
        _delay_ms(100);
    }
    return 0;
}