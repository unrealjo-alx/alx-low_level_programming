#include "main.h"
/**
 * print_last_digit -  a function that prints the last digit of a number.
 * @n : an integer
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
n = -1 * n;
last_digit = n % 10;
if (last_digit < 0)
last_digit = -1 * last_digit;
_putchar('0' + last_digit);
return (last_digit);
}
