#include "main.h"
/**
 * _isalpha - to check lower or upper char
 * @c: input char
 * Return: 1 is char is lower or uppercase , else 0 .
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
