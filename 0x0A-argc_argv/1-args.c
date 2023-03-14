#include <stdio.h>

/**
 * main - program prints no of arguments passed to it.
 * @argc: agrument count to main.
 * @argv: arguments to main
 *
 * Return: 0 always.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
