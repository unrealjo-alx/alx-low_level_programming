#include "main.h"
/**
 * get_bit - a function that returns the value
 * of a bit at a given index.
 * @n: a positive integer
 * @index: the index, starting from 0 of the bit you want to get
 * Return:the value of the bit at given index
 * or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int res = -1, i = 0;

	if (n == 0 && index == 0)
		return (0);

	while (n != 0)
	{
		if (i == index)
			res = n % 2;
		i++;
		n = n / 2;
	}

	return (res);
}
