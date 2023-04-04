#include "main.h"
/*
 * _memset - a function that fills memory with a constant byte.
 * @s: a pointer to an area of memory
 * @b: constant of byte
 * @n: number of bytes to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
		s[i++] = b;
	return s;
}