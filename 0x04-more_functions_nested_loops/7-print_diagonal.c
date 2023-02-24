#include "main.h"
/**
 * print_diagonal - finctions that draws a straight line in the terminal
 * @n: input value
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			
				_putchar(' ');
			_putchar('\\');

			if (j == n-1)
				continue;
			_putchar('\n');
		}

	}
	_putchar('\n');
}	
