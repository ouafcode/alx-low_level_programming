#include <stdio.h>
#include "main.h"
/**
 * get_endianness - to check the endianness
 *
 * Return: 0 if big endian or 1 if not
 */
int get_endianness(void)
{
	char *ptr;
	unsigned int i = 1;

	ptr = (char *) &i;
	return (*ptr);
}
