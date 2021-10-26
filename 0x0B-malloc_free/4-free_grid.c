#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid to free
 * @height: size of the height
 */

void free_grid(int **grid, int height)
{
	while (height > 0)
	{
		free(grid[height - 1]);
		height--;
	}
	free(grid);
}
