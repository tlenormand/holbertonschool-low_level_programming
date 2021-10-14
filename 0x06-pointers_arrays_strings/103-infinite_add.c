#include "main.h"

/**
 * infinite_add - function that prints an integer
 * @n1: integer to print
 * @n2: integer to print
 * @r: integer to print
 * @size_r: integer to print
 * Return: xxx
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

int l1 = _strlen(n1), l2 = _strlen(n2), i = 0, ten = 0;
int nb_n1, nb_n2, k, len_r, temp, left;
	for (l1 -= 1, l2 -= 1; l1 >= 0 && l2 >= 0; l1--, l2--, i++)
	{
		nb_n1 = n1[l1] - '0';
		nb_n2 = n2[l2] - '0';

		if (nb_n1 + nb_n2 + ten >= 10)
			r[i] = (nb_n1 + nb_n2 + ten) % 10 + '0';
		else
			r[i] = nb_n1 + nb_n2 + ten + '0';
		ten = (nb_n1 + nb_n2 + ten) / 10;
	}
r[i] = '\0';
if (l2 >= 0)
	r = add_if_size_array_different(r, i, ten, l2, nb_n2);
if (l1 >= 0)
	r = add_if_size_array_different(r, i, ten, l1, nb_n1);
for (k = 0; r[k]; k++)
	i = k;
if (ten == 1)
	r[i + 1] = '1', i++;
if (_strlen(r) + 1 > size_r)
	return (0);
r[i + 1] = '\0';
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

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array to reverse
 * @n: lenght of the "a" array
 */

void reverse_array(int *a, int n)
{

	int temp, left;

	for (left = 0; left < n; left++, n--)
	{
		temp = a[left];
		a[left] = a[n - 1];
		a[n - 1] = temp;
	}

}

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: value to return
 * @src: string to copy
 * Return: return value: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];

	return (dest);
}

/**
 * add_if_size_array_different - function add if size of array is different
 * @r: xxxn
 * @i: xxx
 * @ten: xxx
 * @len_n: xxx
 * @nb_n: xxx
 * Return: r
 */

char *add_if_size_array_different(char *r, int i, int ten, int len_n, int nb_n)
{
while (len_n >= 0)
{
	if (nb_n % 10 + ten > 9)
	{
		r[i] = ((nb_n + ten) % 10) + '0';
		ten = 1;
	}
	else
	{
		r[i] = ((nb_n + ten) % 10) + '0';
		ten = 0;
	}
	i++;
	len_n--;
}
return (r);
}
