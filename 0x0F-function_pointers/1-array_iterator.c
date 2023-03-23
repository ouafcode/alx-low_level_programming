#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator -  function that execute a function on each element array
 * @array: input array
 * @size: input size
 * @action: function pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(*(array + i));
	}
}
