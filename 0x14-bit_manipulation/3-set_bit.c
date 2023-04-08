#include <stdio.h>
#include "main.h"
/**
 * set_bit - set the value of bit to 1 at given index
 * @n: input integer
 * @index: is the index starting from 0 of the bit
 *
 * Return: 1 if success or -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1;

	if (index >= sizeof(*n) * 8)
		return (-1);
	set = set << index;
	*n = *n | set;

	return (1);
}
