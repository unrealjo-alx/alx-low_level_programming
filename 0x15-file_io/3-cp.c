#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void error_exit(char *msg, int code);
void check_arguments(int argc);
int open_file(char *filename, int flags, mode_t mode);
void copy_file(int fd_from, int fd_to);
void close_file(int fd);

/**
 * main - entry point for the program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: exit code
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;

	check_arguments(argc);

	fd_from = open_file(argv[1], O_RDONLY, 0);
	fd_to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);

	copy_file(fd_from, fd_to);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

/**
 * error_exit - prints an error message to stderr and exits the program
 * @msg: error message to print
 * @code: exit code
 */
void error_exit(char *msg, int code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", msg);
	exit(code);
}

/**
 * check_arguments - checks the number of command line arguments
 * @argc: number of command line arguments
 */
void check_arguments(int argc)
{
	if (argc != 3)
	{
		error_exit("Usage: file_from file_to", 97);
	}
}

/**
 * open_file - opens a file with the given filename, flags, and mode
 * @filename: name of the file to open
 * @flags: flags to use when opening the file
 * @mode: mode to use when creating the file
 * Return: file descriptor of the opened file
 */
int open_file(char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		error_exit("Can't read from file", 98);
	}
	return (fd);
}

/**
 * copy_file - copies the contents of one file to another
 * @fd_from: file descriptor of the file to read from
 * @fd_to: file descriptor of the file to write to
 */
void copy_file(int fd_from, int fd_to)
{
	ssize_t num_read, num_written;
	char buffer[BUFFER_SIZE];

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
}

/**
 * close_file - closes a file
 * @fd: file descriptor of the file to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
