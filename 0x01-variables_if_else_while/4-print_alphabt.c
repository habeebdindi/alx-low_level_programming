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
		if (alphabet != 101 && alphabet != 113)
			putchar(alphabet);

		alphabet++;
	}
	putchar('\n');

	return (0);
}
