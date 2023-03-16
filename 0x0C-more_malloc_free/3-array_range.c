#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: input min value
 * @max: input max value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int r, i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	r = max - min;
	ptr = malloc(sizeof(int) * r + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0;min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
