#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - program frees a 2 dimensional grid
 * @grid: The grid to be freed
 * @height: The height
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}
