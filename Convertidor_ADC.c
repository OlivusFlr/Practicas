#include <18f2550.h>
#fuses INTRC, NOMCLR, NOBROWNOUT
#use delay (internal = 8M)
long valor;
void main(){
   setup_adc_ports(AN0);
   output_B(0);
   setup_adc(adc_clock_internal);
   set_adc_channel(0);
   while(TRUE){
      valor = read_adc();
      start:
      output_B(valor);
      if(input(pin_A1)){
         while(true){
            valor = read_adc();
            valor = 255 - valor;
            output_B(valor);
            if(input(pin_A2)){
               delay_us(50);
               goto start;
            }
         }
      }
      delay_us(50);
   }
}

