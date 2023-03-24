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

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(arg, int);
			printf("%d", x);
			printf(" ");
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(arg, int);
			printf("%d", x);
			if (i < n - 1)
			{
				printf("%s", separator);
				printf(" ");
			}
		}
	}
	va_end(arg);

	printf("\n");
}
