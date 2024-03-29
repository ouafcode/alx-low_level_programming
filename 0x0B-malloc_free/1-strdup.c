#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly memory
 * @str: input string
 * Return: return pointer to new string
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
