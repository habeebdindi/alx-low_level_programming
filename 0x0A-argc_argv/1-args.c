#include "main.h"
#include <stdio.h>
/**
 * main - entry point.
 * @argc: tells how many elements are in argv.
 * @argv: an array of pointers to the strings which are those arguments.
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
