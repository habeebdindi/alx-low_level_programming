#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of program.
 * @argc: argument count.
 * @argv: number of arguments supplied into program.
 *
 * Return: 1 if one of the arguments is non-digit character and 0 otherwise.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	char num[] = {'0', '1', '2', '3' , '4', '5', '6', '7', '8', '9'};
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(argv[i]))
			{
				printf("0\n");
			}
			for (j = 0; num[j] != '\0'; j++)
			{
				if (argv[i] != num[j])
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
                        printf("%d\n", sum);
		}
	}
	return (0);
}
