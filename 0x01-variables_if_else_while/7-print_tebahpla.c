#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	char alphabet_rev = 122;

	while (alphabet_rev >= 97)
	{
		putchar(alphabet_rev);
		alphabet_rev--;
	}
	putchar('\n');

	return (0);
}
