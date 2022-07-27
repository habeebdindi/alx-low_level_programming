#include "main.h"
#include <stdio.h>
/**
 * main - entry point of program.
 * @argc: count of arguments supplied.
 * @argv: array of pointers to the array of character objects supplied.
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
