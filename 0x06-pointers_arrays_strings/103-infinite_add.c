#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Add 2 inputed number into string with a limit
 * size on the output
 *
 * @n1: First number
 * @n2: Second number
 * @r: Output array
 * @size_r: Size of the output array
 *
 * Return: 0 if there is a problem, else the sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

	int len1, len2, strlen, i = 0, ten = 0, sum = 0, len_r, temp, left;

/*la chaine la plus longue*/
	len1 = _strlen(n1);
	len2 = _strlen(n2);
	if (len1 > len2)
		strlen = len1;
	else
		strlen = len2;

/*si chaine dépasse le size_r sort du programme*/
	if (strlen + 1 >= size_r)
		return (0);

/*somme des deux tableaux*/
	for (i = 0, len1 -= 1, len2 -= 1; i < size_r - 1; i++, len1--, len2--)
	{
		sum = ten;
		if (len1 >= 0)
			sum += n1[len1] - '0';
		if (len2 >= 0)
			sum += n2[len2] - '0';
		if (len1 <= 0 && len2 <= 0 && sum == 0)
			break;
		r[i] = sum % 10 + '0';
		ten = (sum / 10);
		r[i + 1] = '\0';
	}

len_r = _strlen(r) - 1;
		for (left = 0; left <= len_r; left++, len_r--)
	{
		temp = r[left];
		r[left] = r[len_r];
		r[len_r] = temp;
	}

	return (r);
}

/**
 * _strlen - function that returns the length of a string
 * @s: string to returns the length
 * Return: Return the length of the string
 */

int _strlen(char *s)
{

	int strlen = 0;

	while (s[strlen] != '\0')
		strlen++;

	return (strlen);
}
