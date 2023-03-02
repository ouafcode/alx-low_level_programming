#include "main.h"
/**
 * _strcat - function that concatenates two string
 *
 * @dest: input string
 * @src: input string
 * Return: concatenate string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
