#include "main.h"
/**
 * rev_string - reverse the given string.
 * @s: the original string
 */
void rev_string(char *s)
{

	int i = 0, j = 0;
	char tmp;

	while (s[i] != '\0')
		i++;

	for (; j < i; j++)
	{
		i--;
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
