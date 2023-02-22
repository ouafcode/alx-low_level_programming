#include "main.h"
/**
 * print_sign - print sign of number
 * @n: input value
 * Return: 1 if positive , or -1 if negative ,or O
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
