#include "main.h"
/**
 * _strncat - function that concatenates two string
 *
 * @dest: input string
 * @src: input string
 * @n: input bytes
 * Return: concatenate string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
