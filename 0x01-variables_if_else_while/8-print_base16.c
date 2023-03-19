#include <stdio.h>

/**
 * main - Main program entry point
 * Return: void
 */
int main(void)
{
int i;
for (i = 0; i < 16; i++)
{
printf("%x", i);
}
/* 10 is the ASCII for new line */
putchar(10);
return (0);
}
