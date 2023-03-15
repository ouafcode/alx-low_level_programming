#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenate all the arguments of program
 * @ac: input argument count
 * @av: input argument
 * Return: return pointer to 2d array
 */
char *argstostr(int ac, char **av)
{
	int i, n, k = 0, l = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			ptr[k] = av[i][n];
			k++;
		}
		if (ptr[k] == '\0')
		{
			ptr[k++] = '\n';
		}
	}
	return (ptr);
}
