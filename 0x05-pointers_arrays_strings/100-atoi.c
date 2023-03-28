#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: a string
 * Return: result numbers
 */
int _atoi(char *s)
{
	unsigned int num = 0, i = 0, sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = sign * -1;

		if (s[i] >= 48 && s[i] <= 57)
			num = (s[i] - 48) + num * 10;
		else if (num > 0)
			break;
		i++;
	}

	return (num * sign);
}
