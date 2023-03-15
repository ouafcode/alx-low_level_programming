#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that function that frees a 2 dimensional
 * @grid: the address of the two dimensional grid
 * @height: input height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
