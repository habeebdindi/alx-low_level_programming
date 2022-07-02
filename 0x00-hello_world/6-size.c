#include <stdio.h>
/**
 * main - entry point
 *
 * main description: main prints the sizes of data types depending
 * on the computer it is compiled and run on
 * Return: returns 0 if sizes are printed and EOF otherwise.
 */
int main(void)
{
	char b;
	int a;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
