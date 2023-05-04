#include "main.h"
/**
 * binary_to_uint - convert a bin number to unsigned int
 * @b: pointing to string of 0 and 1 char
 * Return: the converted number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val;
	int i;

	val = 0;
	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val = 2 * val + (b[i] - '0');
	}
	return (val);
}
