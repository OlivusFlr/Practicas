/* 
Universidad Autonoma de Chihuahua
Facultad de Medicina y Ciencias Biomédicas
Ingeniería Biomédica
Grupo: 5IB1
No de práctica: 8
Nombre de la práctica: Torque y medio paso
Equipo: 6
Docente: Ing. Juan Carlos Osorio Diaz 
*/

#include <18F2550.h>
#device ADC=10
#use delay (clock=8M)
#fuses INTRC_IO,NOWDT,NOPUT,NOMCLR,NOPROTECT,NOCPD,NOBROWNOUT
#fuses NOIESO,NOFCMEN,NOLVP,NODEBUG,NOWRT
#use FAST_IO(A)
int D,Q,W,E,R,T,Y,U,I,O,P;
void main(){
   for (;;){
      Q= 0b00001000;
      W= 0b00000100;
      E= 0b00000010;
      R= 0b00000001;
      T= 0b00001100;
      Y= 0b00000110;
      U= 0b00000011;
      I= 0b00001001;
      O=input(pin_A1);
      P=input(pin_A2);
      setup_adc(adc_clock_internal);
      setup_adc_ports(AN0);
      D = read_adc();
         if(D==0){
            output_B(0);
            R=150;
         }
         if(D>=1 && D<=50){
            R=200;
         }
         if(D>=51 && D<=100){
            R=350;
         }
         if(D>=101 && D<=150){
            R=400;
         }
         if(D>=151 && D<=200){
            R=450;
         }
         if(D>=201 && D<=255){
            R=500;
         }
         if (O==1){
            output_B(Q);
            delay_ms(600+R);
            output_B(T);
            delay_ms(600+R);
            output_B(W);
            delay_ms(600+R);
            output_B(Y);
            delay_ms(600+R);
            output_B(E);
            delay_ms(600+R);
            output_B(U);
            delay_ms(600+R);
            output_B(R);
            delay_ms(600+R);
            output_B(I);
            delay_ms(600+R);
         }
         if(P==1){
            output_B(I);
            delay_ms(600+R);
            output_B(R);
            delay_ms(600+R);
            output_B(U);
            delay_ms(600+R);
            output_B(E);
            delay_ms(600+R);
            output_B(Y);
            delay_ms(600+R);
            output_B(W);
            delay_ms(600+R);
            output_B(T);
            delay_ms(600+R);
            output_B(Q);
            delay_ms(600+R);
         }
   }
}
