#include "main.h"
/**
 * prime_add - to evaluate from 1 to n
 * @i: take the value of n
 * @j: number that iterate from 1 to n
 *
 * Return: On success 1
 */
int prime_add(int i, int j)
{
	if (i == j)
		return (1);
	else if (i % j == 0)
		return (0);
	return (prime_add(i, j + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n : number Integer
 *
 * Return: On success 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_add(n, 2));
}
