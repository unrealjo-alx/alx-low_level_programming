#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: a string
 * Return: a pointer to the array, or NULL if it fails
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *new_str;

	if (str == NULL)
		return (NULL);

	new_str = malloc(sizeof(char) * strlen(str) + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		new_str[i] = str[i];

	return (new_str);
}
