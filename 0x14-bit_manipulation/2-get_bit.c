#include "main.h"
#define INT_BASE_REP (sizeof(size_t) * 8)
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
	if (index > INT_BASE_REP)
		return (-1);

	return ((n >> index) & 1);
}
