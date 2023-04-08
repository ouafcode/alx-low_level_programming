#include <stdio.h>
#include "main.h"
/**
 * clear_bit - set the value of bit to 0
 * @n: input integer
 * @index: is the index starting from 0 of the bit
 *
 * Return: 1 if success or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1;

	if (index >= sizeof(*n) * 8)
		return (-1);
	set = ~(set << index);
	*n = *n & set;

	return (1);
}
