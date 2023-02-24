#include <stdio.h>
#include "main.h"

/**
 * main - Entry point, prints Fizz for multiples of 3, Buzz for
 * multiples of 5, and FizzBuzz for multiples of both.
 *
 * Return: 0 always.
 */

int main(void)
{
	int i;

	i = 1;

	while(i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		i++;
	}

	printf("\n");

	return (0);
}
