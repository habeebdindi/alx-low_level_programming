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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
