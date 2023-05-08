#include "main.h"
/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: The name of the file to read
 * @letters: The number of letters to read from the file
 *
 * Return: The actual number of letters read and printed.
 * Returns 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    char *buf;
    ssize_t num_read, num_written;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buf = (char *) malloc(letters + 1);
    if (!buf) {
        close(fd);
        return (0);
    }

    num_read = read(fd, buf, letters);
    if (num_read == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    buf[num_read] = '\0';
    num_written = write(STDOUT_FILENO, buf, num_read);

    free(buf);
    close(fd);

    return ((num_written == -1) ? 0 : num_written);
}
