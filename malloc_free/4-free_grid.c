#include "main.h"

/**
 * free_grid - a
 * @grid: a
 * @height: a
 *
 * Return: a
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
