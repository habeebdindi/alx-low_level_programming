#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: 0 if successful and EOF on error
 */
int main(void)
{
	int letters;

	letters = 'a';
	while (letters <= 'z')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
