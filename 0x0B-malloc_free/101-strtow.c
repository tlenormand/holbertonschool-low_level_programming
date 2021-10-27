#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * strtow - xxx
 * @str: xxx
 * Return: xxx
 */

char **strtow(char *str)
{
	char **list = NULL;
	int i = 0, list_index = 0, len = 0, row = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

/*count the words of the array "str" to assign in row in "list"*/
	while (str[i])
		if (str[i] != ' ')
			row++, i += nb_letter(i, str);
		else
			i++;
	if (row == 0)
		return (NULL);

/*assign the size "row" for the array "list"*/
	list = (char **)malloc((sizeof(char *) * row + 2));
	if (list == NULL)
	{
		free(list);
		return (NULL);
	}

	i = 0, len = 0, row = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			list[row] = (char *)malloc((1 + nb_letter(i, str) * sizeof(char)));
			if (list[row] == NULL)
			{
				for (list_index = 0; list_index <= row; list_index++)
					free(list[list_index]);
				free(list);
				return (NULL);
			}
			len = 0;
			for (list_index = i; str[list_index] != ' ' && str[list_index]; list_index++)
			{
				list[row][len] = str[list_index];
				len++, i++;
			}
			row++;
		}
		else
			i++;
	}

	return (list);
}


/**
 * nb_letter - count the number of letter in the word
 * @i: index of str
 * @str: string
 * Return: the number of letter
 */

int nb_letter(int i, char *str)
{
	int letter = 0;

	while (str[i] != ' ' && str[i] != '\0')
		letter++, i++;

	return (letter);
}
