#include "main.h"
/**
 * free_grid - frees 2d grids prev created.
 * @height: height.
 * @grid: grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}
	free(grid);
}

