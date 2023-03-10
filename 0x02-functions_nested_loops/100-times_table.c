#include "main.h"
/**
 * print_times_table - prints the n times table
 *
 * @n: input value
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i, j, k;

	if ((n < 15) || (n > 0))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');

			for (j = 1; j <= n; j++)
			{
				k = i * j;
				if ((k / 10) > 0)
				{
					_putchar((k / 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((k % 10) + '0');

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		_putchar('\n');

		}

	}
}
