#include "main.h"
/**
 * _strpbrik - Write a function that searches a string
 * @s: input string
 * @accept: input string
 *
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				return (s+j);
			}
		}
	}
	return ('\0');
}
