#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat -  function that concatenates two strings.
 * @s1: input string
 * @s2: input string
 * Return: return pointer point to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int n = 0;
	int t = 0;
	int k;
	char *ptr;
	for (i = 0; s1[i] != '\0'; i++)
	{
		n++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		t++;
	}
	k = n + t;
	ptr = (char *)malloc(sizeof(char) * (k + 1));
	for (i = 0; i < k; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = n; i < k; i++)
	{
		for (j = 0; j <= t; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
	}
	return (ptr);
}
