#include <stdio.h>
#include "main.h"
/**
 * flip_bits - return the number of bits you would need to flip
 * @n: first input integer
 * @m: second input number
 *
 * Return: the numbers of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, size;
	int count = 0;
	unsigned long int set1;
	unsigned long int set2;

	set2 = n ^ m;
	size = sizeof(n) * 8;
	for (i = size - 1; i >= 0; i--)
	{
		set1 = set2 >> i;
		if (set1 & 1)
			count++;
	}
	return (count);
}
