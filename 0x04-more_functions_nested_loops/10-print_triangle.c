#include"main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size : the size of the  triangle
 * Return: void .
*/
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i <= size; i++)
{
for (k = size; k > i;  k--)
_putchar(' ');
for (j = 0; j < i; j++)
_putchar('#');
_putchar('\n');
}
}
