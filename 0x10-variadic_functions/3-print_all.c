#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - prints anything.
 * @format: is a list of types of arguments passed to the function.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list args;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' ||
					      format[i] == 'f' ||
					      format[i] == 'i' ||
					      format[i] == 's'))
			printf(", ");
		i++;
	}
	putchar('\n');
	va_end(args);
}
