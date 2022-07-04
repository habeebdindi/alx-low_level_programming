#include <stdio.h>

/**
* main - entry point of program
*
* Return: 0 if successful and EOF on error
*/
int main(void)
{
	int num;

	num = 'z';
	while (num >= 'a')
	{
		putchar(num);
		num--;
	}
	putchar('\n');
	return (0);
}
