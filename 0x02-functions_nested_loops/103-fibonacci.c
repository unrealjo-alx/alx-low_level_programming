#include <stdio.h>
#define MAX_VALUE 4000000
/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: the return code
 */
int main(void)
{
int j = 0, sequence[2] = {0, 1}, result;
while (sequence[0] <= MAX_VALUE &&  sequence[1] <= MAX_VALUE)
{
if (j % 2  == 0)
{
sequence[1] = sequence[0] + sequence[1];
if (sequence[1] % 2 == 0 && result <  sequence[1] && sequence[1] != 0)
result = sequence[1];
}
else
{
sequence[0] = sequence[0] + sequence[1];
if (sequence[0] % 2 == 0 && result <  sequence[1] && sequence[0] != 0)
result = sequence[0];
}
j++;
}
printf("%d\n", result);
return (0);
}
