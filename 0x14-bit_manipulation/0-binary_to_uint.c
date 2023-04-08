#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - convert binary to an unsignet int
 * @b: pointer to string of 0 or 1
 *
 * Return: converted number or 0 if b different to 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		n = 2 * n + (b[i] - '0');
	}
	return (n);
}

