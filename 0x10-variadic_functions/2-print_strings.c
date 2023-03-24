#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings -  function that prints strings
 *
 * @separator:  is string to be printed between numbers
 * @n: number of integers passed to function
 *
 * Return : Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *str;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);

		if (str == NULL)
			printf("(nul)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	printf("\n");

	va_end(arg);
}
