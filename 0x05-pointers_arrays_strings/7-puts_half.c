#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 * If the number of characters is odd,
 * it prints the last halt of the string.
 * @str: a string
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (*(str + i) != '\0')
		i++;

	if (i % 2 != 0)
		j = (i - 1) / 2 + 1;
	else
		j = i / 2;

	for (; j < i; j++)
		_putchar(str[j]);

	_putchar('\n');
}
