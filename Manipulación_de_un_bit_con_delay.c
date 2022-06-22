#include <18f2550.H>
#fuses INTRC, NOMCLR, NOBROWNOUT
#use delay (internal = 8M)
void main(){
   start:
      output_high(pin_B0);
      output_bit(pin_C0,1);
      delay_ms(500);
      output_low(pin_B0);
      output_bit(pin_C0,0);
      delay_ms(500);
   goto start;
}
