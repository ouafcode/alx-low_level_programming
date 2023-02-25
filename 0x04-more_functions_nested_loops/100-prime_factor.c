#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always O.
 */
int main(void)
{
	long int i, x, nbr = 612852475143;

	x = nbr /2;
	for (i = 2; i < x; i++)
	{
		if (nbr % i == 0 && i != nbr)
		{
			nbr = nbr / i;
		}
		else
			if (i == nbr)
			{
				printf("%ld", i);
				break;
			}
	}
	printf("\n");

	return (0);
}
