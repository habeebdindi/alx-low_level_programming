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
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
