#include <stdio.h>
#include "main.h"
/**
 * main - prints the numbers 1-100.
 *
 * main: whenever a multiple of 3 only is encountered, Fizz is printed,
 * whenever a multiple of 5 only is encountered, Buzz is printed, if
 * the number is a multiple of 3 and 5, FizzBuzz is printed
 * Return: 0 always
 */

int main(void)
{
	int c;

	c = 1;
	while (c < 100)
	{
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (c % 3 == 0 && c % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (c % 5 == 0 && c % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (c == 1)
		{
			printf("%d", c);
		}
		else
		{
			printf(" %d", c);
		}
		c++;
	}
	_putchar('\n');
	return (0);
}
