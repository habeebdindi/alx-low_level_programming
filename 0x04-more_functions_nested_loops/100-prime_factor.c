#include "main.h"
#include <stdio.h>
#include <stdint.h>

/**
 * is_prime - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: Always 0.
 */

int is_prime(int64_t n)
{
	int64_t i = 2;

	if (n < 2)
		return (0);

	while (i <= n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}


/**
 * main - Entry point, prints largest prime factor.
 *
 * Return: Always 0.
 */
int main(void)
{
	int64_t i;
	int64_t num;

	num = 612852475143;
	/* num = 600; */

	i = num / 2;
	while (i > 1)
	{
		if (num % i == 0)
		{
			if (is_prime(i))
			{
				printf("%ld\n", i);
				break;
			}
		}
		i--;
	}
	return (0);
}
