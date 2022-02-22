#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: arguments
 * Return: the string concatenates
 */

char *argstostr(int ac, char **av)
{
	char *list = NULL;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* count the length "len" of the array "list" */
	for (i = 0; i < ac; i++, len++)
		for (j = 0; av[i][j]; j++, len++)
			;

	/* assign the size "len" of the array "list" */
	list = (char *)malloc((sizeof(char) * len + 1));
	if (list == NULL)
	{
		free(list);
		return (NULL);
	}

	/* fill the array "list" */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			list[k] = av[i][j];
			k++;
		}

		list[k] = '\n';
		k++;
	}

	return (list);
}
