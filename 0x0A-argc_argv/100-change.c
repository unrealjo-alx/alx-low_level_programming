#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that prints the minimum number
 * of coins to make change for an amount of money.
 * avialable coins values 25, 10, 5, 2, and 1 cent .
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments.
 * Return: if the number of arguments passed to your program is not exactly 1,
 * otherwise 0;
 */
int main(int argc, char *argv[])
{
	int sum = 0, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	sum = sum + n / 25;
	n = n % 25;
	sum = sum + n / 10;
	n = n % 10;
	sum = sum + n / 5;
	n = n % 5;
	sum = sum + n / 2;
	n = n % 2;
	sum = sum + n;
	printf("%d\n", sum);
	return (0);
}
