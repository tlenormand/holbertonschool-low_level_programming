#include <stdlib.h>
#include "main.h"

/**
 * free_grid - xxx
 * @grid: xxx
 * @height: xxx
 */

void free_grid(int **grid, int height)
{
    while (height >= 0)
    {
        free(grid[height]);
        height--;
    }
    free(grid);
}
