#include <stdlib.h>
#include "main.h"

/**
 * strtow - function that splits a string into words
 * @str: string
 * Return: array of string
 */

char **strtow(char *str)
{
	char **list = NULL;
	int i = 0, index = 0, lenght = 0, row = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	row = nb_word(i, str);
	list = (char **)malloc((sizeof(char *) * nb_word(i, str) + 1));
	if (list == NULL || row == 0)
	{
		free(list);
		return (NULL);
	}

	row = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			list[row] = (char *)malloc((2 + nb_letter(i, str) * sizeof(char)));
			if (list[row] == NULL)
			{
				for (index = 0; index <= row; index++)
					free(list[index]);
				free(list);
				return (NULL);
			}
			lenght = 0;
			for (index = i; str[index] != ' ' && str[index]; index++)
			{
				list[row][lenght] = str[index];
				lenght++, i++;
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


/**
 * nb_word - count the number of words in str
 * @i: index of str
 * @str: string
 * Return: the number of words
 */

int nb_word(int i, char *str)
{
	int row = 0;

	while (str[i])
		if (str[i] != ' ')
			row++, i += nb_letter(i, str);
		else
			i++;

	return (row);
}
