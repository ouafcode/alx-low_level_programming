#include "main.h"
/**
 * reverse_array - reverse content of array
 * @a: array
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int rev;

	for (i = 0; i < n--; i++)
	{
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
