#include "main.h"
#include<stdio.h>
/**
 * jack_bauer - prints every minute starting from 00:00 to 23:59.
 * Return: void
 */
void jack_bauer(void)
{
int hour,minute;
for ( hour = 0; hour <= 23; hour++)
{
for ( minute = 0; minute <= 59; minute++)
{
_putchar('0'+ (hour / 10));
_putchar('0'+ (hour % 10));
_putchar(':');
_putchar('0'+ (minute / 10));
_putchar('0'+ (minute % 10));
_putchar('\n');
}
}
return;
}
