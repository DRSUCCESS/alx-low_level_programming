#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * print_strings - function that prints strings
 * @...: a variable nuber of strings to be printed
 *
 * Description: If separator is NULL, it is not printed.
 * If one of the strings if nULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *str;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);

	}

	printf("\n");
	va_end(arg);

}
