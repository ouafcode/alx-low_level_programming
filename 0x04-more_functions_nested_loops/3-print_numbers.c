#include "main.h"
/**
 * print_numbers - print the numbers from 0 to 9
 *
 * Return: Always 0 success
 */
void print_numbers(void)
{
	int  c;

	for (c = 0; c < 10; c++)
	{
		_putchar((c % 10) + '0');
	}
	_putchar('\n');
}
