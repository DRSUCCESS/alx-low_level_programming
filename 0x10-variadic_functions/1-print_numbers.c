#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints strings
 * @n: number of integers passed to the function arguments
 * @separator: string to be printed between the strings
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(arg, int));
			if (i != n - 1)
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(arg, int));
	}

	putchar('\n');
	va_end(arg);

}
