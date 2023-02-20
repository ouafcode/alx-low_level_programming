#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (z = '0'; z <= '7'; z++)
	{
		for (x = z + 1; x <= '8'; x++)
		{
			for (y = x + 1; y <= '9'; y++)
			{
				putchar(z);
				putchar(x);
				putchar(y);

				if (y < '9' || x < '8' || z < '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
