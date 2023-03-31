#include "main.h"
#include <stdlib.h>
/**
 * _strcat - a function that concatenates two strings.
 * @dest:  the destination string
 * @src: the source string
 * Return: pointer to overwritten string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	for (; src[j] != '\0'; i++, j++)
		dest[i] = src[j];

	dest[i] = '\0';

	return (dest);
}
