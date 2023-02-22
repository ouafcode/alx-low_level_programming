#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @x: digit input
 *
 * Return: last digit of number x
 */
int print_last_digit(int x)
{
	int y;

	if (x > 0)
		y = x % 10;
	else
		y = -1 * (x % 10);
	_putchar((y % 10) + '0');
	return (y % 10);
}
