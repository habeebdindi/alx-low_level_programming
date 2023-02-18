#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	char alphabet = 97;
	char ALPHABET = 65;

	while (alphabet <= 122)
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHABET <= 90)
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');

	return (0);
}
