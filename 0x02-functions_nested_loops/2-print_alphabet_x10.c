#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Void.
 */
void print_alphabet_x10(void)
{
int i,j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i < 'z' + 1; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
