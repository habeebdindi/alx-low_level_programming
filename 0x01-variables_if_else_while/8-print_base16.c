#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	char digits = 48;
	char alphabets = 97;

	while (digits <= 57)
	{
		putchar(digits);
		digits++;
	}
	while (alphabets <= 102)
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');

	return (0);
}
