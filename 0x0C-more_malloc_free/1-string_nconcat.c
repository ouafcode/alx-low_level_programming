#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat -  function that concatenates two strings.
 * @s1: input string
 * @s2: input string
 * @n: input size
 * Return: return pointer point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int x = 0;
	unsigned int y = 0;
	unsigned int k;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		x++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		y++;
	}
	k = x + y;
	if (n >= y)
		n = y;
	ptr = malloc(k);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = x; i < k; i++)
	{
		for (j = 0; j < n; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
	}
	return (ptr);
}
