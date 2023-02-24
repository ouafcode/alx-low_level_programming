#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the largest prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, n, nbr = 612852475143;

	n = nbr / 2;
	for (i = 2; i < n; i++)
	{
		if (nbr % i == 0 && i != nbr)
		{
			printf("%ld ", i);
			nbr = nbr / i;
		}
		else
			if (i == nbr)
			{
				printf("%ld ", i);
				break;
			}
	}
	printf("\n");

	return (0);
}
