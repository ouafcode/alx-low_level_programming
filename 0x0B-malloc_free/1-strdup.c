#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function that returns a pointer to a newly memory
 * @str: input string
 * Return: return pointer to new string
 */
char *_strdup(char *str)
{
	int i = 0, j, k = 0;
	char *ptr = NULL;

	while (str[k] != '\0')
	{
		i++;
		k++;
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
	free(ptr);
}
