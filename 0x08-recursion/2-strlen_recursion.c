#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: pointer point to string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
		_strlen_recursion(s);
	}
	return (len);
}
