#include <stdio.h>
#include <stdlib.h>
/**
 * main - a faunction that	adds positive numbers.
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int is_number = 1, j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				is_number = 0;
				break;
			}
		}
		if (is_number == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
