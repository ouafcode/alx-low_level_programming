#include "main.h"
/**
 * addSqrt - function to validate natural number
 *
 * @i: input integer for calculating square root
 * @j: iterator
 *
 * Return: On success 1
 */
int addSqrt(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	return (addSqrt(i, j + 1));
}
/**
 * _sqrt_recursion - return the natural square root of n
 * @n: Number integer
 *
 * Return: On success 1
 */
int _sqrt_recursion(int n)
{
	return (addSqrt(n, 1));
}
