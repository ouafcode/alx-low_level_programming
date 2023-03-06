#include "main.h"
/**
 * _memcpy - function that copies memory area
 *
 * @src: memory area source
 * @dest: memory area to copied in
 * @n: number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;
	int i = n;

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
