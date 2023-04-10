#include <stdio.h>
/**
 * main - a faunction that prints all arguments it receives.
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
    /* if args > 0 then i will take 1, otherwise 0 */
	int i = argc > 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
