#include "main.h"
#include <stdio.h>
void closer(int *f, int *f1);
/**
 * main - ...
 * @ac: ...
 * @av: ...
 *
 * Return: 0...
 */
int main(int ac, char **av)
{
	int fd, fd1, nbytes;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	buf = malloc(strlen(av[1]) + 1);
	if (!buf)
		return (-1);
	while ((nbytes = read(fd, buf, 1024)))
		if (write(fd1, buf, nbytes) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			closer(&fd, &fd1);
			exit(99);
		}
	free(buf);
	closer(&fd, &fd1);
	return (0);
}

/**
 * closer - closes syscalls.
 * @f: ...
 * @f1: ...
 */
void closer(int *f, int *f1)
{
	if (close(*f) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", *f);
		exit(100);
	}
	if (close(*f1) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", *f1);
		exit(100);
	}
}
