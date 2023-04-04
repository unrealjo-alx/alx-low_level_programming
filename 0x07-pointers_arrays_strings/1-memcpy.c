#include "main.h"
/**
 * _memcpy -  a function that copies memory area.
 * @dest: a pointer to an area of memory
 * @src: bytes of memory area
 * @n: number of bytes to be copied
 * Return: pointer to modified memory area .
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < sizeof(src) || i < n)
	{
		*(dest + i) = src[i++];
		i++;
	}
	return (dest);
}
