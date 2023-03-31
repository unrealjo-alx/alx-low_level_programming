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
	char *str = dest;
	int i = 0, j = 0;

	str = malloc(sizeof(src) + sizeof(dest));
	for (; dest[i] != '\0'; i++)
		str[i] = dest[i];

	for (; src[j] != '\0'; i++, j++)
		str[i] = src[j];

	return (str);
}
