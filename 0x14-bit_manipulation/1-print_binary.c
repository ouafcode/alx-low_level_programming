#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: input number
 *
 * Return : Nothing
 */
void print_binary(unsigned long int n)
{
	int i;
	int nb_count = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;
		if (curr & 1)
		{
			_putchar('1');
			nb_count++;
		}
		else if (nb_count)
			_putchar('0');
	}
	if (!nb_count)
		_putchar('0');
}
