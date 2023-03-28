#include "main.h"
#include <stdlib.h>
/**
 * _strcpy - copies the string pointed to by src to string dest
 * @src: the soource string
 * @dest: string to copy into
 * Return: a pointer to copy of src
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}

	dest[j] = '\0';
	return (dest);
}
