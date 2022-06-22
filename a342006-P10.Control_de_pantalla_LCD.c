/* 
Universidad Autonoma de Chihuahua
Facultad de Medicina y Ciencias Biom�dicas
Ingenier�a Biom�dica
Grupo: 5IB1
No de pr�ctica: 10
Nombre de la pr�ctica: Control de pantalla LCD
Equipo: 6
Docente: Ing. Juan Carlos Osorio Diaz 
*/
#include <18f2550.h>
#fuses INTRC, NOMCLR, NOBROWNOUT
#use delay (internal = 8M)
#include <lcd.c>
#define LCD_ENABLE_PIN(PIN_B0)
#define LCD_RS_PIN(PIN_B1)                                   
#define LCD_RW_PIN(PIN_B2)                                   
#define LCD_DATA4(PIN_B4)                                   
#define LCD_DATA5(PIN_B5)                                   
#define LCD_DATA6(PIN_B6)                                   
#define LCD_DATA7(PIN_B7)
const char mensaje[] = {"HOLA MUNDO"};
void main (){
   lcd_init();
   lcd_gotoxy(1,1);
   lcd_putc(mensaje);
}

