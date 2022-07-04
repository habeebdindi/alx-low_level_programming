#include <stdio.h>

/**
* main - entry point of program
*
* Return: 0 if successful and EOF on error
*/
int main(void)
{
	int num;
	int alph;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	alph = 'a';
	while (alph <= 'f')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
