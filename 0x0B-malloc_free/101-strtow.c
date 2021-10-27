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
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			row++, i++, len = 0;
		else
			i++;
	}

/*assign the size "row" for the array "list"*/
	list = (char **)malloc((sizeof(char *) * row));
	if (list == NULL)
	{
		free(list);
		return (NULL);
	}

/*assign the size "len" of the array "list[row]" and the the value*/
	i = 0, len = 0, row = 0;
	while (str[i])
	{
		/*skip if space*/
		if (str[i] == ' ' && str[i + 1] == ' ' && str[i + 1] != '\0')
			i++;
		/*this is a new word, so a new column to declare in malloc with*/
		/*the lenght of the word then reset the lenght*/
		else if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		{
			list[row] = (char *)malloc((1 + nb_letter(i + 1, str) * sizeof(char)));
			if (list[row] == NULL)
			{
				for (list_index = 0; list_index <= row; list_index++)
					free(list[list_index]);
				free(list);
				printf("error");
				return (NULL);
			}
			row++, i++, len = 0;
		}
		/*otherwise, you don't have space so duplicate str in list[row][lenght]*/
		else if (str[i] != ' ')
		{
			list[row - 1][len] = str[i];
			len++, i++;
		}
		else
			i++;
	}

	if (row == 0)
		return (NULL);

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

	return(letter);
}