/* ATTINY817 Blinky

   Linker3000 06-Apr-2018
   
   V1.0
   
   Compiled with Atmel Studio 7 for ATTINY XPLAINED XMINI board
   
   Provided free to use as you wish. No warranties etc.
   
*/   

// This value is set to what you know the clock to be - it does NOT set the clock...
#define F_CPU (3300000UL) // 3.3 MHz system clock

// See post #4 here for how clock frequency is determined:
// https://www.avrfreaks.net/forum/help-blinking-led-using-timer-interrupt-attiny817?skey=attiny817

#include <avr/io.h>
#include <util/delay.h>

//------------------------------------------------
int main(void)
{
	PORTC.DIRSET = PIN0_bm;
	
	while(1){
		PORTC.OUTTGL = PIN0_bm; // toggle PIN 0, Port C state (should toggle the LED)
		_delay_ms(500);
	}
}