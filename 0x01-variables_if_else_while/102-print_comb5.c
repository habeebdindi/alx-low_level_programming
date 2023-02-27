#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int i, j;

	i = 0;
	while (i < 99)
	{
		j = 1;
		while (j < 100)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
			}
			if (j > i)
			{
				if (i != j)
				{
					putchar((j / 10) + '0');
					putchar(j % 10 + '0');

					if (!(i == 98 && j == 99))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
