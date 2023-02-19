#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	write(2, "\n", 1);
	return (1);
}
