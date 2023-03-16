#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: input element for array
 * @size: input size
 * Return: return pointer to new string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return(NULL);
	}
	ptr = malloc(nmemb * size);
	if(ptr == NULL)
	{
		return(NULL);
	}
	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
