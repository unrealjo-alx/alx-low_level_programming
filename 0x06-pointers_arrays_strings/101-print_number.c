#include "main.h"
#include <stdio.h>
/**
 * print_number - a function that prints an integer using _putchar.
 */
void print_number(int n)
{
	int power = 1, x, once = 0;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	x = n;

	while (x != 0)
	{
		power *= 10;
		x = x / 10;
	}

	while (power != 0)
	{
		if (once != 0)
			_putchar('0' + ((n / power) % 10));

		power = power / 10;
		once = 1;
	}
	_putchar('\n');
}
