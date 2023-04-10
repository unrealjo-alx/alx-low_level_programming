#include <stdio.h>
/**
 * main - a faunction that prints program name, followed by a new line.
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
