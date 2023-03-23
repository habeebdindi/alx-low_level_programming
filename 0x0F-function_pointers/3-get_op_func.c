#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation asked by
 * the user.
 * @s: selects the correct function to perform the operation asked by the user.
 *
 * Return: pointer to a function that takes in to int args and returns an int.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5 && strlen(s) == 1)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
        return (NULL);
}
