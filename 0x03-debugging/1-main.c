#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	i = 0;

	while (i < 10)
		/**
		 * seeing an infinite loop?
		 * It's because an increment statement 
		 * was not set.
		 * add an increment statement to solve 
		 * this problem.
		 */
	{
	putchar(i);
	}
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
