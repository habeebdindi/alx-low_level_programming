#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(int argc, char **argv)
{
	char *opcode;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcode = (char *)main;

	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%02hhx", opcode[i]);
		if (i != atoi(argv[1]) - 1)
			printf(" ");
	}
	putchar('\n');
	return(0);
}
