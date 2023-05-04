#include "main.h"
/**
 * strlength - get string's length
 * @str: a string
 * Return: number of chars in str
 */
unsigned int strlength(const char *str)
{
	unsigned int n = 0;

	while (str[n] != '\0')
		n++;
	return (n);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number,or 0
 * if the string contains invalid chars
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0, k = 2;

	if (b == NULL)
		return (0);

	for (i = strlength(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			sum = sum + k;
		k *= 2;
	}

	return (sum / 2);
}
