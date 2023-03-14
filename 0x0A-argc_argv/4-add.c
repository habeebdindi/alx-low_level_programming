#include <stdio.h>
#include <stdlib.h>
/**
 * main - print each argument on a newline
 * @argc: argument count to main.
 * @argv: array of pointers to char(arguments).
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	int i;
	char *endptr;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 1; argv[i] != NULL; i++)
	{
		sum += strtol(argv[i], &endptr, 10);
		if (*endptr)
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc > 1)
		printf("%d\n", sum);
	return (0);
}
