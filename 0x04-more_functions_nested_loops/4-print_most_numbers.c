#include"main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9 .
 * expect the numbers 2 and 4 .
 *
 * Return: void .
*/
void print_most_numbers(void)
{
int i = 0;
for (; i <= 9; i++)
{
if (i == 2 || i == 4)
continue;
_putchar('0' + i);
}
_putchar('\n');
}
