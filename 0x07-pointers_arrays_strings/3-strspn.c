#include "main.h"
#include <string.h>
/**
 * _strspn - a function that locates a character in a string.
 * @s: the main string to be scanned
 * @accept: he string containing the list of characters to match
 * Return: number of characters in the initial segment of accept
 * which consist only of characters from s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0, size = strlen(accept);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j] && n <= size)
				n++;
		}
	}
	return (n);
}
