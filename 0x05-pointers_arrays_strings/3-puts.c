#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
