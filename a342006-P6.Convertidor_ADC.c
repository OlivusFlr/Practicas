/* 
Universidad Autonoma de Chihuahua
Facultad de Medicina y Ciencias Biomédicas
Ingeniería Biomédica
Grupo: 5IB1
No de práctica: 6
Nombre de la práctica: Convertidor ADC 
Equipo: 6
Docente: Ing. Juan Carlos Osorio Diaz 
*/
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

