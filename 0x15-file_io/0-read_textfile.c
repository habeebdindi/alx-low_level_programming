#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: a pointer to the file name.
 * @letters:  number of letters it should read and print.
 *
 * Return: returns the actual number of letters it could read and print,
 * 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nbytes;
	char *buf;

	if (letters <= 0)
		return (0);

	buf = malloc(letters + 1);
	if (!buf)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	nbytes = read(fd, buf, letters);

	if (!buf || nbytes == -1)
	{
		close(fd);
		return (0);
	}
	nbytes = write(STDOUT_FILENO, buf, nbytes);
	if (nbytes == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);
	free(buf);
	return (nbytes);
}
