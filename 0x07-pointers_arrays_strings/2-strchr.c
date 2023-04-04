#include "main.h"
#define NULL ((void *)0)
/**
 * _strchr - a function that locates a character in a string.
 * @s: a string
 * @c: a character to be searched
 * Return: a pointer to the first occurrence of 'c' in s;
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0, found = 0;

	while (!found)
		found = s[i++] == c || s[i] == '\0';

	if (found == 0)
		return (NULL);
	else
		return (s + i - 1);
}
