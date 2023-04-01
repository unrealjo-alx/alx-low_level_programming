#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: the original string
 * Return: the modified string
 */
char *cap_string(char *s)
{
	int i, offset = 'a' - 'A', prev, status;

	for (i = 0; s[i] != '\0'; i++)
	{
		prev = i - 1;
		if (prev < 0)
			prev = -prev;

		status = (s[prev] >= 'a' && s[prev] <= 'z') || (s[prev] >= 'A' && s[prev] <= 'Z') || (s[prev] < '0' && s[prev] > '9');
		if (s[i] >= 'a' && s[i] <= 'z' && !status)
			s[i] = s[i] - offset;
	}
	return (s);
}
