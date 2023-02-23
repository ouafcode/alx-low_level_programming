#include "main.h"
/**
 * _isupper - function checks for uppercase character.
 *
 * @c: input character
 *
 * Return: 0 or 1 depend character
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
