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
		return (0);

	list = malloc(sizeof(int *) * height);
	if (list == NULL)
		return (0);

	for (wi = 0; wi < width; wi++)
		list[wi] = malloc(sizeof(int) * width);
	if (list == NULL)
		return (0);

	for (wi = 0; wi < width; wi++)
		for (he = 0; he < height; he++)
			list[he][wi] = 0;

	return (list);
}
