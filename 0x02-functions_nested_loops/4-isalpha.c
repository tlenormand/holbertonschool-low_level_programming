#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: varaible number of the caracter in ASCII
 *
 * Return: 1 if c is a letter lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);

	return (0);
}
