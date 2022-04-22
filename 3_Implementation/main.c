#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
    DDRB=DDRB&0b11111101;
    DDRC=DDRC|0b01000000;

    while(1)
        {
        if(PINB & 0b00000010) // for switch(act as a passcode protected door)
        PORTC=PORTC&0b10111111;

        else
        PORTC=PORTC|0b01000000; //controlling in security room(for alert)

    }
    return 0;
}
