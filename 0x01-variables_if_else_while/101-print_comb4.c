#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int i;

	i = 10;
	while (i < 790)
	{
		if (i % 100 != 0)
		{
			if ((i % 100) % 10 > (i % 100) / 10 && (i % 100) / 10 > i / 100)
			{
				putchar('0' + (i / 100));
				putchar('0' + ((i % 100) / 10));
				putchar('0' + ((i % 100) % 10));
				if (i != 789)
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
