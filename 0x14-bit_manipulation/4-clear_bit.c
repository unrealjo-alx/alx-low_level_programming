#include "main.h"
/* number  of bits in the representation of a unsigned long int */
#define INT_BASE_REP (sizeof(size_t) * 8)
/**
 * clear_bit- sets the value of a bit to 0 at a given index.
 * @n: a positive integer
 * @index:index is the index, starting from 0
 * of the bit you want to set
 * Return:1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* creating a mask */
	if (index > INT_BASE_REP)
		return (-1);

	*n = (*n & (~(1 << index)));
	return (1);
}
