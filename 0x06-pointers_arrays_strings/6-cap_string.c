#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: the original string
 * Return: the modified string
 */
char *cap_string(char *s)
{
	int i, offset = 'a' - 'A', prev;

	for (i = 0; s[i] != '\0'; i++)
	{
		prev = i - 1;
		if (prev < 0)
			prev = -prev;

		if (s[i] >= 'a' && s[i] <= 'z' && (s[prev] == ' ' || s[prev] == '\n'))
			s[i] = s[i] - offset;
	}
	return (s);
}
