#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: input array
 * @size: size of array
 *
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int diag1, diag2, i;

	diag1 = 0;
	diag2 = 0;
	
	for (i = 0; i < size; i++)
	{
		diag1 = diag1 + a[i * size + i];
	}
	for (i = size - 1;i >= 0; i--)
	{
		diag2 = diag2 + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", diag1, diag2);
}
