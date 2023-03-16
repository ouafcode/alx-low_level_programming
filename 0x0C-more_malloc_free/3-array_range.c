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
	r = (max - min) + 1;
	ptr = malloc(sizeof(int) * r);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < r; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
