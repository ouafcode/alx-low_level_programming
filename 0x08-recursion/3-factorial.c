#include "main.h"
/**
 * factorial -  function that returns the factorial of a given number
 *
 * @n: input integer
 * Return: return factorial of given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n >= 1)
		return (n * factorial(n - 1));
	else
		return (1);
}
