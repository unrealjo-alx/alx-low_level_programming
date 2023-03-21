#include "main.h"
/**
 * _isalpha - Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 * @c : ASCII code for a character
 * Return: int
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
return (0);
}
