#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to a newly allocated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *new_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	new_str = malloc((strlen(s1) + strlen(s2)) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		new_str[i] = s2[j];
	}
	new_str[i] = '\0';

	return (new_str);
}
