#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, t1, t2, t3, t4;

	for (x = 0; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			t1 = x / 10;
			t2 = x % 10;
			putchar(t1 + '0');
			putchar(t2 + '0');
			putchar(' ');
			t3 = y / 10;
			t4 = y % 10;
			putchar(t3 + '0');
			putchar(t4 + '0');
			if (x != 98 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
