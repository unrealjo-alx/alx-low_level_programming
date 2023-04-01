#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @s: the original string
 * Return: the modified string
 */
char *rot13(char *s)
{
	int i, j;
	char *input, *output;

	input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
		}
	}
	return (s);
}
