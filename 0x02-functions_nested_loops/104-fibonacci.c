#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: the return code
 */
int main(void)
{
int j;
__uint_least64_t sequence[2] = {0, 1};
for (j = 1 ; j <= 98; j++)
{
if (j % 2  == 0)
{
sequence[1] = sequence[0] + sequence[1];
printf("%ld", sequence[1] % 1000000000);
}
else
{
sequence[0] = sequence[0] + sequence[1];
printf("%ld", sequence[0] % 1000000000);
}
if (j != 98)
{
printf(", ");
}
}
putchar('\n');
return (0);
}
