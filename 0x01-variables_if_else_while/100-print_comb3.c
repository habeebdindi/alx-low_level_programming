#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 90)
	{
		if (i % 10 != 0)
		{
			if (i / 10 < i % 10)
			{
				putchar('0' + (i / 10));
				putchar('0' + (i % 10));
				if (i / 10 != 8 && 1 % 10 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		i++;
	}
	putchar('\n');

	return (0);
}
