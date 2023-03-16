#include "main.h"
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function that allocate memory
 * @b: input size
 * Return: if function fail , should cause normal process
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	if (b == INT_MAX)
	{
		exit(98);
	}
	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
