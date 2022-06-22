#include <18f2550.H>
#fuses INTRC, NOMCLR, NOBROWNOUT
#use delay (internal = 8M)
void main(){
   start:
   while(TRUE){
      output_high(pin_B0);
      output_low(pin_B1);
      output_low(pin_B2);
      output_high(pin_B3);
      output_low(pin_B4);
      if( input(pin_A0) ){
         delay_ms(500);
         output_low(pin_B0);
         output_high(pin_B1);
         delay_ms(500);
         output_low(pin_B1);
         output_high(pin_B2);
         output_low(pin_B3);
         output_high(pin_B4);
         delay_ms(2500);
         output_low(pin_B4);
         output_high(pin_B3);
         output_low(pin_B2);
         output_high(pin_B1);
         delay_ms(500);
         output_low(pin_B1);
         output_high(pin_B0);
         goto start;
      }
   }
}
