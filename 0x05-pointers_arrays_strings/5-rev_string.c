#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * rev_string - reverse the given string.
 * @s: the original string
 */
void rev_string(char *s)
{

	int i = 0, j;
	char tmp;

	while (*(s + i) != '\0')
		i++;

	for (j = 0; j < i / 2; j++)
	{
		i--;
		tmp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = tmp;
	}
}
