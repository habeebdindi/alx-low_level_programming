#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num + 0);
		num++;
	}
	putchar('\n');

	return (0);
}
