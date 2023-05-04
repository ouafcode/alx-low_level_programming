#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @index: the index of the bit
 * @n: pointer to the nbr
 *
 * Return: 1 if work or -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
