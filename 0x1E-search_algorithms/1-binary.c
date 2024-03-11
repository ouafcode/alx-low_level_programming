#include "search_algos.h"
/**
 * binary_search - function search for value in array
 * @array: pointer to the first ele;ent of array
 * @size: number elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 *         or -1 is value not present
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, i;
	size_t right = size - 1;

	if (!array || size == 0)
		return (-1);

	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
	}
	return (-1);
}
