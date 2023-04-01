#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: the original string
 * Return: the modified string
 */
char *cap_string(char *s)
{
	int i, offset = 'a' - 'A', prev, status, j;
	char del[14] = {' ', '\t', '\n',
					',', ';', '.',
					':', '!', '?',
					'"', '(', ')',
					'{', '}'};
	for (i = 0; s[i] != '\0'; i++)
	{
		prev = i - 1;
		if (prev < 0)
			prev = -prev;
		status = 0;
		for (j = 0; j < 14; j++)
		{
			if (s[prev] == del[j])
			{
				status = 1;
				break;
			}
		}

		if (s[i] >= 'a' && s[i] <= 'z' && status)
			s[i] = s[i] - offset;
	}
	return (s);
}
