#include "main.h"
/**
 * _strlen - functions that return the length of strings
 *
 * @s: input char as pointer
 * Return: the length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
