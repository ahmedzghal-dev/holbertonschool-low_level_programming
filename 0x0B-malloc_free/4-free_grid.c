#include "main.h"
#include <stdlib.h>
/**
 * free_grid - check the code
 * @grid: the grid
 * @height: the grid height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
	grid = NULL;
}
