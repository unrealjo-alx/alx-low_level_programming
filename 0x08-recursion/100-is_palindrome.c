#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_pal - checks if a string is a palindrome.
 * @s: a string.
 * @i: position to the left.
 * Return: 1 if a string is a palindrome, otherwise 0.
 */
int is_pal(char *s, int i)
{
	if (s[0] == '\0')
		return (1);
	if (s[0] != s[i])
		return (0);
	return (is_pal(s + 1, i - 2));
}
/**
 * is_palindrome - a function that checks if a string is a palindrome.
 * @s: a string
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	return (is_pal(s, strlen(s) - 1));
}
