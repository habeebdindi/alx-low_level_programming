#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	char alphabet = 97;

	while (alphabet <= 122)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
