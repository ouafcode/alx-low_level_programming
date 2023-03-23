#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * int_index - functions that searches for an integer
 * @array: input array
 * @size: input size
 * @cmp: function pointer
 *
 * Return: return the first index of the first element
 * for the wich the cmp fnction does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(*(array + i)))
			return (i);
	}
	return (-1);
}
