#include <stdio.h>
/**
 * main - display two diff digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '8'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);

			if (y < '9' || x < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
