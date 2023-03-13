#include <stdio.h>

/**
 * main - prints the name of a program.
 * @argc: argument count.
 * @argv: array of pointes to char.
 *
 * Return: 0 always.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return(0);
}
