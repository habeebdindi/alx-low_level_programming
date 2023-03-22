#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: pointer to the name.
 * @f: a pointer to a function that accepts a pointer to a char as an argument
 * and returns nothing.
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
