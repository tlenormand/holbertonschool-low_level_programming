#include "main.h"
#include <stdio.h>

/**
 * wildcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	int i = 0, j = 0, istar = 0;

	return (compare(s1, s2, i, j, istar));
}


/**
 * compare - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * @i: index string 1
 * @j: index string 2
 * @istar: index star, verify if there is a star before in s2
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */

int compare(char *s1, char *s2, int i, int j, int istar)
{

	if (s1[i] != '\0')
	{
		if (s2[j - 1] == '*' && s1[i - 1] == s1[i])
		{
			return (compare(s1, s2, i + 1, j, istar));
		}

		else if (s1[i] == s2[j])
		{
			istar = 0;
			return (compare(s1, s2, i + 1, j + 1, istar));
		}
		else if (s2[j] == '*' && s2[j - 1] != '*')
		{
			istar = 1;
			return (compare(s1, s2, i + 1, j + 1, istar));
		}

		else if (s2[j] == '*')
		{
			istar = 1;
			return (compare(s1, s2, i, j + 1, istar));
		}
		else if (s1[i] != s2[j] && istar == 1)
			return (compare(s1, s2, i + 1, j, istar));
		else if (s2[j] == '\0' && s2[j - 1] == '*')
			return (1);
	}
	else if ((s1[i] == '\0' && s2[j] == '*') && istar == 0)
		return (compare(s1, s2, i, j + 1, istar));
	else if ((s1[i] == '\0' && s2[j] != '\0'))
		return (0);
	else if (s1[i] == '\0')
		return (1);
	return (0);
}


/**
 * star - function that overpass the star in string 2
 * @s1: string 1
 * @s2: string 2
 * @i: index string 1
 * @j: index string 2
 * Return: index of j passing the star (*)
 */

int star(char *s1, char *s2, int i, int j)
{
	if (s2[j] == '*' && s2[j - 1] != '*')
		return (star(s1, s2, i + 1, j + 1));
	else if (s2[j] == '*')
		return (star(s1, s2, i, j + 1));
	else
		return (j);
}
