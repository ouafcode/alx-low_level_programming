#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - prints the largest prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, n;

	n = 612852475143;

	while ((n % 2 == 0))
	{
		printf("%d ", 2);
		n = n / 2;
	}
	for (i = 3; i <= (n / 2); i += 2)
	{
		while (n % i == 0)
		{
			printf("%ld ", i);
			n = n / i;
		}
	}
	if (n > 2)
		printf("%ld ", n);

	return (0);
}
