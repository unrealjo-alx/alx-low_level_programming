#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @s: the original string
 * Return: the modified string
 */
char *leet(char *s)
{
	int i, j;
	char *letters = "aelot";
	char *numbers = "43107";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (letters[j] == s[i] || letters[j] - 32 == s[i])
				s[i] = numbers[j];
		}
	}
	return (s);
}
