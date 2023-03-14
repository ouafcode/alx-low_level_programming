#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function to create an array of chars
 * @size: input size of array
 * @c: input char
 * Return: null if size equal to zero or return a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
