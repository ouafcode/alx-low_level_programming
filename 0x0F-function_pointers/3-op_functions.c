#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_duv(int a, int b);

/**
 * op_add - Returns the sums of two numbers.
 * @a: the first number
 * @b: the second numbers
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @a: the first number
 * @b: the second numbers
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the multiplication of two numbers.
 * @a: the first number
 * @b: the second numbers
 *
 * Return: the multi of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: the first number
 * @b: the second numbers
 *
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the reminder  of two numbers.
 * @a: the first number
 * @b: the second numbers
 *
 * Return: the remainder  of division of  a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
