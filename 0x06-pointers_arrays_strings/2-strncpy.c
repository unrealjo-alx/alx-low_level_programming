#include "main.h"
#include <stdlib.h>
/**
 * _strncpy -  a function that copies a string.
 * @dest:  the destination string
 * @src: the source string
 * @n: number of characters to concat from src
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
