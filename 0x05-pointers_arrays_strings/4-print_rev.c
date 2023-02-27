#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @str: input string
 * Return: Nothing
 */
void print_rev(char *str)
{
	int i, n;
	int counter = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}

	for (n = (counter - 1); n >= 0; n--)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
