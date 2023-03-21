#include "main.h"
/**
 * print_last_digit -  a function that prints the last digit of a number.
 * @n : an integer
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;
if (n > 0)
last_digit = n % 10;
else
last_digit = (-1 * n) % 10;
_putchar('0' + last_digit);
return (last_digit);
}
