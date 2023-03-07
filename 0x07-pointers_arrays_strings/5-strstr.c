#include "main.h"
/**
 * _strstr - function that locates a substring
 *
 * @haystack: input string
 * @needle: input string
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != *needle)
	{
		haystack++;
	}
	return (haystack);
}
