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

	while (i < (nbr /2))
	{
	if ((nbr % 2) == 0)
	{
	nbr /= 2;
	continue;
	}
	for (i = 3; i < (nbr / 2); i += 2)
	{
	if ((nbr % i) == 0)
	{
	nbr /= i;
	}
	}
	}
	printf("%ld \n", nbr);
	return (0);
}
