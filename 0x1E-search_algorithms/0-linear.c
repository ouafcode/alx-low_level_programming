#include "search_algos.h"
/**
 * linear_search - function search for value in array
 * @array: pointer to the first ele;ent of array
 * @size: number elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 *         or -1 is value not present
*/

int linear_search(int *array, size_t size, int value)
{

	size_t i;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]); 
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
