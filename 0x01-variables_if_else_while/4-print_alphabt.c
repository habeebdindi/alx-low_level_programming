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
		if (letters != 'q' && letters != 'e')
		putchar(letters);
		letters++;
	}

	putchar('\n');
	return (0);
}
