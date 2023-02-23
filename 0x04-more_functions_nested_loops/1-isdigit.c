#include "main.h"
/**
 * _isdigit - function that checks for a digit
 *
 * @c: input digit
 * Return: 1 or 0 if is digit
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
