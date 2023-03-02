#include "main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: input string
 * @src: input string
 * @n: input bytes
 * Return: string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
