#include <stdio.h>
/**
 * _strlen - calcuates the length of a string.
 * @s: a string
 * Return: the length of s
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
i++;
return (i);
}
