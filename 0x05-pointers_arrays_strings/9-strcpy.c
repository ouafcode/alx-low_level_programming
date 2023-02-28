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
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
