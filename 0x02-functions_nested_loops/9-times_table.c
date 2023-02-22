#include "main.h"
/**
 * times_table - function that print 9 times .
 * rw = row, cl = column, i = result
 * Return: times table
 */
void times_table(void)
{
	int rw, cl, i;

	for (rw = 0; rw <= 9; rw++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cl = 0; cl <= 9; cl++)
		{
			i = (rw * cl);
			if ((i / 10) > 0)
			{
				_putchar((i / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((i % 10) + '0');

			if (cl < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
