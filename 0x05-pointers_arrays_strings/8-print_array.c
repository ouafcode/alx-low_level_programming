#include "main.h"
#include <stdio.h>
/**
 * print_array - Write a function that prints n elements of array
 *
 * @a: array name
 * @n: input number of element
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
