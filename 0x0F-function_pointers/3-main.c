#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * main -  that performs handle simple math operations.
 * Return: exit code;
 * @argc: Number of arguments
 * @argv: array of arguments
 */
int main(int argc, char const *argv[])
{
	int a, b, (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]), b = atoi(argv[3]);

	if ((strcmp(argv[2], "%") || strcmp(argv[2], "/")) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	fun = get_op_func((char *)argv[2]);

	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fun(a, b));
	return (0);
}
