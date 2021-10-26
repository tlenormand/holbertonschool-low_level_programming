#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: the array
 */

int **alloc_grid(int width, int height)
{
	int wi, he, **list;

	if (width < 1 || height < 1)
		return (NULL);

	list = (int **)malloc(sizeof(int *) * height);
	if (list == NULL)
	{
		free(list);
		return (NULL);
	}

	for (he = 0; he < height; he++)
	{
		list[he] = (int *)malloc(sizeof(int) * width);
		if (list == NULL)
		{
			free_grid(list, height);
			return (NULL);
		}
	}

	for (wi = 0; wi < width; wi++)
		for (he = 0; he < height; he++)
			list[he][wi] = 0;

	return (list);
}


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
