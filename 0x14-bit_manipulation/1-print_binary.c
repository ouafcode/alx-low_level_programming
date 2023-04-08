#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of number
 * @n: input integer
 *
 * Return: input number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	int size;
	unsigned long int val_bit;

	size = sizeof(n) * 8;
	for (i = size - 1; i >= 0; i--)
	{
		val_bit = n >> i;
		if (val_bit & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
