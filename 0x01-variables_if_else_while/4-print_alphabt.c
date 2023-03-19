#include <stdio.h>

/**
 * main - Main program entry point
 * Return: void
 */
int main(void)
{
int i;
for (i = 97; i < 123; i++)
{
if (i ==  101 || i == 113)
continue;
putchar(i);
}
/* 10 is the ASCII for new line */
putchar(10);
return (0);
}
