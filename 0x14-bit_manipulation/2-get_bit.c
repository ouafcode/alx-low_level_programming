#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: input integer
 * @index: is the index starting from 0 of the bit you want to get
 *
 * Return: the value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;
	unsigned long int shift_val;

	if (index >= sizeof(n) * 8)
		return (-1);
	shift_val = n >> index;
	val = shift_val & 1;
	return (val);
}
