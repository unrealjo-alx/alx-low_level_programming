#include"main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14 .
 *
 * Return: void .
*/
void more_numbers(void)
{
int i, j = 0;
for (; j <= 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
_putchar('1');
_putchar('0' + (i % 10));
}
_putchar('\n');
}
}
