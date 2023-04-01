#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: the original string
 * Return: the modified string
 */
char *string_toupper(char *s)
{
	int i, offset = 'a' - 'A';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - offset;
	}
	return (s);
}
