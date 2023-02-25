#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the largest prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
	long i = 2, nbr = 612852475143;

	while (nbr != 1)
	{
		if (nbr % i == 0)
		{
			while(nbr % i == 0)
			{
				printf("%ld ", i);
				nbr = nbr / i;
			}
		}
		i++;
	}
	printf("\n");
	return (0);
}
