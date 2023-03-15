#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2D array
 * @width: input width grid
 * @height: input height of the grid
 * Return: return pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	/*Allocate memory for row*/
	ptr = (int **)malloc(width * sizeof(int *));
	/*check memory validity*/
	if (ptr == NULL)
		return (NULL);
	/*Allocate memory for collumn*/
	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *)malloc(height * sizeof(int));
		/*check memory validity*/
		if (ptr[i] == NULL)
		{
			for (i = 0; i < width; i++)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
	}
	/*Initialized 2D array*/
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
