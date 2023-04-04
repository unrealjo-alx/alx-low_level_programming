#include "main.h"
#include <stdlib.h>
#define NULL ((void *)0)
/**
 * _strchr - a function that locates a character in a string.
 * @s: a string
 * @c: a character to be searched
 * Return: a pointer to the first occurrence of 'c' in s;
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0, found = 0, j;
	char *res;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			found = 1;
			break;
		}
		i++;
	}
	if (!found)
		return (NULL);

	res = malloc(sizeof(s) - i);
	for (j = 0; j < sizeof(s) - i; j++, i++)
		res[j] = s[i];

	return (res);
}
