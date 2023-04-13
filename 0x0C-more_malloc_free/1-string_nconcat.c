#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n:number of bytes to copy from s2
 * Return: concatenated string,
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	new_str = (char *)malloc((n + strlen(s1)) * sizeof(char) + 1);

	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0' && j < n)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
