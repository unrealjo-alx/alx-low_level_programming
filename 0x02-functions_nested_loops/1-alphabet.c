#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Void.
 */
void print_alphabet(void)
{
int i;
for (i = 'a'; i < 'z' + 1; i++)
{
_putchar(i);
}
_putchar('\n');
}
