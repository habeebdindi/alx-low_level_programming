#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: 0 if successful and EOF on error
 */
int main(void)
{
	int letters;
	int caplett;

	letters = 'a';
	while (letters <= 'z')
	{
		putchar(letters);
		letters++;
	}
	caplett = 'A';
	while (caplett <= 'Z')
	{
		putchar(caplett);
		caplett++;
	}
	putchar('\n');
	return (0);
}

