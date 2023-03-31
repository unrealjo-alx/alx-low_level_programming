#include "main.h"
#include <stdio.h>
/**
 * _strncat - a function that concatenates two strings.
 * @dest:  the destination string
 * @src: the source string
 * @n: number of characters to concat from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	for (; src[j] != '\0' && j < n; i++, j++)
		dest[i] = src[j];

	dest[i] = '\0';

	return (dest);
}
