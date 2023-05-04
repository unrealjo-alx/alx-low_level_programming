#include "main.h"
/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: unsigned long integer
 * @m: unsigned long integer
 * Return: number of bites
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	size_t diff;

	diff = n ^ m;

	while (diff > 0)
	{
		num += (diff & 1);
		diff >>= 1;
	}

	return (num);
}
