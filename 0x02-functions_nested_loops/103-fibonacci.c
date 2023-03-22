#include <stdio.h>
#define MAX_VALUE 4000000
#define EXPECTED_SIZE 10 /* Expected size of results array */
/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: the return code
 */
int main(void)
{
int j = 0, m = 0, i = 0;
long int sequence[2] = {0, 1}, results[EXPECTED_SIZE];
while (sequence[0] <= MAX_VALUE &&  sequence[1] <= MAX_VALUE)
{
if (j % 2  == 0)
{
sequence[1] = sequence[0] + sequence[1];
if (sequence[1] % 2 == 0 && sequence[1] != 0)
{
results[m] = sequence[1];
m++;
}
}
else
{
sequence[0] = sequence[0] + sequence[1];
if (sequence[0] % 2 == 0 && sequence[0] != 0)
{
results[m] = sequence[0];
m++;
}
}
j++;
}
for (; i <= EXPECTED_SIZE; i++)
{
printf("%ld", results[i]);
if (i != EXPECTED_SIZE)
printf(", ");
}
printf("\n");
return (0);
}
