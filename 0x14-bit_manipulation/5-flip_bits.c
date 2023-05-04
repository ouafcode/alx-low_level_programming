#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first nbr
 * @m: second nbr
 *
 * Return: return nmr of bit to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int nbr_count = 0;
	int i;
	unsigned long int curr;
	unsigned long int exl;

	exl = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		curr = exl >> i;
		if (curr & 1)
			nbr_count++;
	}
	return (nbr_count);
}
