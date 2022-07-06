#include "main.h"

/**
 * int add - adds two integers and produces their output
 * @n1: first integer
 * @n2: second integer
 *
 * Return: returns the result of the addition of the two integers
 */

int add(int n1, int n2)
{
	if (n1 >= 0 && n2 >= 0)
	{
		return (n1 + n2);
	}
	else if (n1 >= 0 && n2 <= 0)
	{
		return (n1 + n2);
	}
	else if (n1 <=0 && n2 >= 0)
	{	
		return (n1 + n2);
	}
	else 
		return (n1 + n2);
}
