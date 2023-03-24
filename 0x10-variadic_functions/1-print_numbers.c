#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -  function that prints numbers, followed by a new line
 * @separator:  is string to be printed between numbers
 * @n: number of integers passed to function
 *
 * Return : Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(arg, int);
		printf("%d", x);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	printf("\n");

	va_end(arg);
}
