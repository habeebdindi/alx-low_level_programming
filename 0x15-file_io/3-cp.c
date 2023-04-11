#include "main.h"
#include <stdio.h>
void closer(int *f, int *f1);
void read_fail(int *f, int *f1, char *arg1);
void write_fail(int *f, int *f1, char *arg2);

/**
 * main - copies the content of a file to another file.
 * @ac: argument count.
 * @av: pointer to an array of pointers holding arguments to main.
 *
 * Return: 0 on success and -1 if malloc fails.
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
		/* dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]); */
		/* exit(98); */
		read_fail(NULL, NULL, av[1]);
	}
	fd1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (fd1 == -1)
	{
		/* dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]); */
		/* closer(&fd, NULL); */
		/* exit(99); */
		write_fail(&fd, NULL, av[2]);
	}
	buf = malloc(strlen(av[1]) + 1);
	if (!buf)
		return (-1);
	while ((nbytes = read(fd, buf, 1024)))
	{
		if (nbytes == -1 || !buf)
		{
			/* dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]); */
			/* closer(&fd, &fd1); */
			/* exit(98); */
			read_fail(&fd, &fd1, av[1]);
		}
		nbytes = write(fd1, buf, nbytes);
		if (nbytes == -1)
		{
			/* dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]); */
			/* closer(&fd, &fd1); */
			/* exit(99); */
			write_fail(&fd, &fd1, av[2]);
		}
	}
	free(buf);
	closer(&fd, &fd1);
	return (0);
}

/**
 * closer - closes file descriptor(s).
 * @f: a pointer to the first file descriptor.
 * @f1: a pointer to the second file descriptor.
 *
 * Return: does not return. On success, exits with status 100.
 */
void closer(int *f, int *f1)
{
	int check = 0;

	if (f /* && close(*f) == -1 */)
	{
		check = close(*f);
		if (check == -1)
		{
			dprintf(STDERR_FILENO, "Can't close fd %d\n", *f);
			exit(100);
		}
	}
	if (f1 /* && close(*f1) == -1 */)
	{
		check = close(*f1);
		if (check == -1)
		{
			dprintf(STDERR_FILENO, "Can't close fd %d\n", *f1);
			exit(100);
		}
	}
}

/**
 * read_fail - prints to stderr when the read syscall fails.
 * @f: pointer to an open file descriptor.
 * @f1: pointer to another open file descriptor.
 * @arg1: pointer to the name of the file f refers to.
 *
 * Return: does not return, exits with status 98.
 */
void read_fail(int *f, int *f1, char *arg1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1);
	closer(f, f1);
	exit(98);
}

/**
 * write_fail - prints to stderr when the write syscall fails.
 * @f: pointer to an open file descriptor.
 * @f1: pointer to another open file descriptor.
 *
 * @arg2: pointer to the name of the file f1 refers to.
 * Return: does not return, exits with status 99.
 */
void write_fail(int *f, int *f1, char *arg2)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg2);
	closer(f, f1);
	exit(99);
}
