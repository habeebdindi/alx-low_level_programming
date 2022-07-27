#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of program.
 * @argc: argument count
 * @argv: array of pointers to array of arguments.
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
