#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *spr = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", spr, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", spr, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", spr, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", spr, str);
					break;
				default:
					i++;
					continue;
				}
			spr = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
