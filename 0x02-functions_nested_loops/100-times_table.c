#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n : an integer, should be between 0 and 15
 * to print its time table
 * Return: void
 */
void print_times_table(int n)
{
int i, j, k;
if (n > 15)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = i * j;
/* case 1 */
if (k > 99)
_putchar('0' + (k / 100) % 10);
else if (j != 0)
_putchar(' ');
/* case 2 */
if (k > 9)
_putchar('0' + (k / 10) % 10);
else if (j != 0)
_putchar(' ');
/* default */
_putchar('0' + k % 10);
if (j != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
