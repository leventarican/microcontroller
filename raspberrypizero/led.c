#include <wiringPi.h>
#include <stdio.h>

#define  ledPin    17

void main(void)
{	
	printf("init wiring pi\n");
	wiringPiSetup();
	
    printf("pin mode OUTPUT\n");
	pinMode(ledPin, OUTPUT);
    printf("led on\n");
    digitalWrite(ledPin, HIGH);
    delay(1000);
    printf("led off\n");
    digitalWrite(ledPin, LOW);
}