#include "main.h"
/**
 * clear_bit - unction that sets the value of a bit to 0 at a given index
 * @index: index of the bit
 * @n: pointer to nbr
 *
 * Return: 1 if it work or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
