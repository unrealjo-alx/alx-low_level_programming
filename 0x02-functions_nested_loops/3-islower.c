#include "main.h"
/**
 * _islower - returns 1 if the character is lowercase
 * otherwise it returns 0
 * @c : ASCII code for a character
 * Return: void
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
