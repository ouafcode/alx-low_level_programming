#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: input string
 * @accept: input string
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n++;
			}
		}
	}
	return (n);
}
