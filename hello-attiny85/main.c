#define F_CPU 8000000UL

#include <avr/io.h>
// /usr/lib/avr/include/avr/iotn85.h
#include <util/delay.h>

/*
led the LED blink each 500ms
*/
int main (void) {

   DDRB |= (1 << PB0);

   while(1) {
       PORTB ^= (1 << PB0);
       _delay_ms(500);
   }

   return 0;
}