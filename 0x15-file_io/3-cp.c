#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/**
 * error_exit - print error message to STDERR and exit with given code
 * @msg: error message
 * @code: exit code
 *
 * Return: nothing
 */
void error_exit(char *msg, int code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", msg);
	exit(code);
}
/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or an error code on failure
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, num_read, num_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		error_exit("Usage: file_from file_to", 97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		error_exit("Can't read from file", 98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		error_exit("Can't write to file", 99);
	}

	while ((num_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		num_written = write(fd_to, buffer, num_read);
		if (num_written != num_read)
		{
			error_exit("Can't write to file", 99);
		}
	}

	if (num_read == -1)
	{
		error_exit("Can't read from file", 98);
	}

	close(fd_from);
	close(fd_to);

	return (0);
}
