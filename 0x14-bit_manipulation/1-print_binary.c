#include "main.h"
/**
 * _printb -  prints the binary representation of a number using recursion.
 * @x: a positive number
 * Return: void
 */
void _printb(unsigned long int x)
{
	if (x == 0)
		return;
	_printb(x >> 1);

	/* x & 0x01 is same as x % 2 */
	_putchar('0' + (x & 0x01));
}
/**
 * print_binary - prints the binary representation of a number.
 * @n: a positive number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	_printb(n);
}
