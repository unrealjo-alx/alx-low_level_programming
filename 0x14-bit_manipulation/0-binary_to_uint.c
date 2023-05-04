#include "main.h"
#include <string.h>
/**
 * power - calculate power of x to y;
 * @x: unsigned integer
 * @y: unsigned integer
 * Return: x ^ y;
 */
unsigned int power(unsigned int x, unsigned int y)
{
	unsigned int i, res = 1;

	for (i = 0; i < y; i++)
		res = res * x;

	return (res);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number,or 0
 * if the string contains invalid chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0, j = strlen(b) - 1;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			sum = sum + power(2, j - i);
		i++;
	}

	return (sum);
}
