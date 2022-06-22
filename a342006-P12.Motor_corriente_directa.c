/* 
Universidad Autonoma de Chihuahua
Facultad de Medicina y Ciencias Biom�dicas
Ingenier�a Biom�dica
Grupo: 5IB1
No de pr�ctica: 12
Nombre de la pr�ctica: Motor corriente directa
Equipo: 6
Docente: Ing. Juan Carlos Osorio Diaz 
*/
#include <18f2550.h>
#device ADC=10
#fuses INTRC, NOMCLR, NOBROWNOUT
#use delay (internal = 8M)
void antirebote1(void){
   while(input(pin_C0)==0){
      delay_ms(30);
      return;
   }
}
void antirebote2(void){
   while(input(pin_C1)==0){
      delay_ms(30);
      return;
   }
}
void antirebote3(void){
   while(input(pin_C2)==0){
      delay_ms(30);
      return;
   }
}
void main(){
   output_low(pin_C4);
   output_low(pin_C5);
   while(True){
      if(input(pin_C0)==1){
         antirebote1();
         output_high(pin_C4);
         output_low(pin_C5);
      }
      if(input(pin_C1)==1){
         antirebote2();
         output_low(pin_C4);
         output_high(pin_C5);
      }
      if(input(pin_C2)==1){
         antirebote3();
         output_low(pin_C4);
         output_low(pin_C5);
      }
   }
}
