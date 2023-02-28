#include "main.h"
/**
 * _strcpy - Write a function that copies the string pointed to by src
 *
 * @dest: to copy in
 * @src: to copie string from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
