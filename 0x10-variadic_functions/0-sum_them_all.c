#include "variadic_functions.h"

/**
 * sum_them_all - a function that calculates the sum of all its parameters.
 * @n: number of passed arguments .
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list list;

	va_start(list, n);

	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}

	va_end(list);

	return (sum);
}
