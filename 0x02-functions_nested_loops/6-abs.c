#include "main.h"
/**
 * int _abs - calculates the absolute value of an integer
 * @i: The integer whos eabsolut value is to be calculated
 *
 * Return: Returns the input value if i is greater than or
 * less than 0
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
		return (i * -1);
}
