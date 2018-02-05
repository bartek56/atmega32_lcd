#include <avr/io.h>
#include <util/delay.h>

#include "lcd44780.h"


int main(void)
{
	Lcd_init();
	DDRD=0b11111111;
	PORTD=0b00000000;
	lcd_locate(3,0);
	lcd_str("HelloWorld");
	while (1)	
	{
		
		PORTD=0b00000000;
		_delay_ms(100);
		PORTD=0b11111111;
		
		_delay_ms(100);
		



	}
}

