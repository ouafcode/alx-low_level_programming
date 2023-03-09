#include "main.h"

int check_pald(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to reverse
 *
 * Return: On success 1
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pald(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pald - check the char for palidrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: On success 1
 */
int check_pald(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pald(s, i + 1, len - 1));
}
