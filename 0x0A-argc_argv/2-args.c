#include <stdio.h>

/**
 * main - print each argument on a newline
 * @argc: argument count to main.
 * @argv: array of pointers to char(arguments).
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
